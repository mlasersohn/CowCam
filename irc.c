/*
 * Copyright (C) 2004-2009 Georgy Yunaev gyunaev@ulduzsoft.com
 *
 * This example is free, and not covered by LGPL license. There is no 
 * restriction applied to their modification, redistribution, using and so on.
 * You can study them, modify them, use them in your own program - either 
 * completely or partially. By using it you may give me some credits in your
 * program, but you don't have to.
 *
 *
 * This example tests most features of libirc. It can join the specific
 * channel, welcoming all the people there, and react on some messages -
 * 'help', 'quit', 'dcc chat', 'dcc send', 'ctcp'. Also it can reply to 
 * CTCP requests, receive DCC files and accept DCC chats.
 *
 * Features used:
 * - nickname parsing;
 * - handling 'channel' event to track the messages;
 * - handling dcc and ctcp events;
 * - using internal ctcp rely procedure;
 * - generating channel messages;
 * - handling dcc send and dcc chat events;
 * - initiating dcc send and dcc chat.
 *
 * $Id: irctest.c 124 2013-11-28 05:44:10Z gyunaev $
 */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

#include "libircclient.h"
#include "irc.h"

void addlog(const char * fmt, ...)
{
	FILE * fp;
	char buf[1024];
	va_list va_alist;

	va_start(va_alist, fmt);
#if defined (_WIN32)
	_vsnprintf(buf, sizeof(buf), fmt, va_alist);
#else
	vsnprintf(buf, sizeof(buf), fmt, va_alist);
#endif
	va_end(va_alist);

	printf("%s\n", buf);

	if((fp = fopen("irctest.log", "ab")) != 0)
	{
		fprintf(fp, "%s\n", buf);
		fclose(fp);
	}
printf("LOG: [%s]\n", buf);
}

void dump_event(irc_session_t * session, const char * event, const char * origin, const char ** params, unsigned int count)
{
char buf[512];
int cnt;

	buf[0] = '\0';
	for(cnt = 0; cnt < count; cnt++)
	{
		if(cnt)
			strcat(buf, "|");
		strcat(buf, params[cnt]);
	}
	addlog("Event \"%s\", origin: \"%s\", params: %d [%s]", event, origin ? origin : "NULL", cnt, buf);
}

void event_join(irc_session_t *session, const char *event, const char *origin, const char **params, unsigned int count)
{
	dump_event(session, event, origin, params, count);
	irc_cmd_user_mode(session, "+i");
	irc_cmd_msg(session, params[0], "Hi all");
	irc_cmd_msg(session, params[0], "This is cow test");
}

void event_connect(irc_session_t *session, const char *event, const char *origin, const char **params, unsigned int count)
{
	irc_ctx_t *ctx = (irc_ctx_t *)irc_get_ctx(session);
	dump_event(session, event, origin, params, count);

	irc_cmd_join(session, ctx->channel, 0);
}

void event_privmsg(irc_session_t *session, const char *event, const char *origin, const char **params, unsigned int count)
{
	dump_event(session, event, origin, params, count);

	printf("'%s' said me (%s): %s\n", origin ? origin : "someone", params[0], params[1]);
}

void dcc_recv_callback(irc_session_t *session, irc_dcc_t id, int status, void *ctx, const char *data, unsigned int length)
{
	static int count = 1;
	char buf[12];

	switch(status)
	{
		case LIBIRC_ERR_CLOSED:
			printf("DCC %d: chat closed\n", id);
		break;
		case 0:
			if(!data)
			{
				printf("DCC %d: chat connected\n", id);
				irc_dcc_msg	(session, id, "Hehe");
			}
			else 
			{
				printf("DCC %d: %s\n", id, data);
				sprintf(buf, "DCC [%d]: %d", id, count++);
				irc_dcc_msg	(session, id, buf);
			}
		break;
		default:
			printf("DCC %d: error %s\n", id, irc_strerror(status));
		break;
	}
}

void dcc_file_recv_callback(irc_session_t *session, irc_dcc_t id, int status, void *ctx, const char *data, unsigned int length)
{
	if(status == 0 && length == 0)
	{
		printf("File sent successfully\n");

		if(ctx)
			fclose((FILE *)ctx);
	}
	else if(status)
	{
		printf("File sent error: %d\n", status);

		if(ctx)
			fclose((FILE *)ctx);
	}
	else
	{
		if(ctx)
			fwrite(data, 1, length, (FILE *)ctx);
		printf("File sent progress: %d\n", length);
	}
}

void event_channel(irc_session_t *session, const char *event, const char *origin, const char **params, unsigned int count)
{
	char nickbuf[128];

	if(count != 2)
		return;

	// COW COW - GET THIS
	irc_ctx_t *ctx = (irc_ctx_t *)irc_get_ctx(session);
	if(ctx != NULL)
	{
		irc_target_get_nick(origin, nickbuf, sizeof(nickbuf));
		sprintf(ctx->use_buffer, "%s: %s\n", nickbuf, params[1]);
		ctx->flag = 1;
	}
	fprintf(stdout, "THIS '%s' said in channel %s: %s\n", origin ? origin : "someone", params[0], params[1]);
	fflush(stdout);

	if(!origin)
		return;

	irc_target_get_nick(origin, nickbuf, sizeof(nickbuf));

	if(!strcmp(params[1], "quit"))
		irc_cmd_quit(session, "of course, Master!");

	if(!strcmp(params[1], "help"))
	{
		irc_cmd_msg(session, params[0], "quit, help, dcc chat, dcc send, ctcp");
	}
	if(!strcmp(params[1], "ctcp"))
	{
		irc_cmd_ctcp_request(session, nickbuf, "PING 223");
		irc_cmd_ctcp_request(session, nickbuf, "FINGER");
		irc_cmd_ctcp_request(session, nickbuf, "VERSION");
		irc_cmd_ctcp_request(session, nickbuf, "TIME");
	}
	if(!strcmp(params[1], "dcc chat"))
	{
		irc_dcc_t dccid;
		irc_dcc_chat(session, 0, nickbuf, dcc_recv_callback, &dccid);
		printf("DCC chat ID: %d\n", dccid);
	}
	if(!strcmp(params[1], "dcc send"))
	{
		irc_dcc_t dccid;
		irc_dcc_sendfile(session, 0, nickbuf, "irctest.c", dcc_file_recv_callback, &dccid);
		printf("DCC send ID: %d\n", dccid);
	}
	if(!strcmp(params[1], "topic"))
		irc_cmd_topic(session, params[0], 0);
	else if(strstr(params[1], "topic ") == params[1])
		irc_cmd_topic(session, params[0], params[1] + 6);

	if(strstr(params[1], "mode ") == params[1])
		irc_cmd_channel_mode(session, params[0], params[1] + 5);

	if(strstr(params[1], "nick ") == params[1])
		irc_cmd_nick(session, params[1] + 5);

	if(strstr(params[1], "whois ") == params[1])
		irc_cmd_whois(session, params[1] + 5);
}

void irc_event_dcc_chat(irc_session_t * session, const char * nick, const char * addr, irc_dcc_t dccid)
{
	printf("DCC chat [%d] requested from '%s' (%s)\n", dccid, nick, addr);

	irc_dcc_accept(session, dccid, 0, dcc_recv_callback);
}


void irc_event_dcc_send(irc_session_t * session, const char * nick, const char * addr, const char * filename, unsigned long size, irc_dcc_t dccid)
{
FILE *fp;

	printf("DCC send [%d] requested from '%s' (%s): %s (%lu bytes)\n", dccid, nick, addr, filename, size);

	if((fp = fopen("file", "wb")) == 0)
		abort();

	irc_dcc_accept(session, dccid, fp, dcc_file_recv_callback);
}

void event_numeric(irc_session_t * session, unsigned int event, const char * origin, const char ** params, unsigned int count)
{
	char buf[24];
	sprintf(buf, "%d", event);

	dump_event(session, buf, origin, params, count);
}

// COW COW - this works for Twitch: "irctest "irc.chat.twitch.tv" moocchao "#moocchao""
// COW COW - port: 6667
// COW COW - password: oauth:2fjhz2tfws02j5iyhmkxvw9dud1phf

irc_session_t *cow_irc_connect(char *server, int in_port, char *user_name, char *password, char *channel_name)
{
void	cow_irc_done(irc_session_t *s);

	irc_callbacks_t	callbacks;
	irc_ctx_t *ctx;
	irc_session_t *s;
	unsigned short port = 6667;

	port = in_port;
	memset(&callbacks, 0, sizeof(callbacks));

	callbacks.event_connect = event_connect;
	callbacks.event_join = event_join;
	callbacks.event_nick = dump_event;
	callbacks.event_quit = dump_event;
	callbacks.event_part = dump_event;
	callbacks.event_mode = dump_event;
	callbacks.event_topic = dump_event;
	callbacks.event_kick = dump_event;
	callbacks.event_channel = event_channel;
	callbacks.event_privmsg = event_privmsg;
	callbacks.event_notice = dump_event;
	callbacks.event_invite = dump_event;
	callbacks.event_umode = dump_event;
	callbacks.event_ctcp_rep = dump_event;
	callbacks.event_ctcp_action = dump_event;
	callbacks.event_unknown = dump_event;
	callbacks.event_numeric = event_numeric;

	callbacks.event_dcc_chat_req = irc_event_dcc_chat;
	callbacks.event_dcc_send_req = irc_event_dcc_send;

	s = irc_create_session(&callbacks);
	if(s != NULL)
	{
		ctx = (irc_ctx_t *)malloc(sizeof(irc_ctx_t));
		ctx->channel = channel_name;
		ctx->nick = user_name;

		irc_set_ctx(s, ctx);

		// If the port number is specified in the server string, use the port 0 so it gets parsed
		if(strchr(server, ':') != 0)
			port = 0;

		// To handle the "SSL certificate verify failed" from command line we allow passing ## in front 
		// of the server name, and in this case tell libircclient not to verify the cert
		if(server[0] == '#' && server[1] == '#')
		{
			// Skip the first character as libircclient needs only one # for SSL support, i.e. #irc.freenode.net
			server++;
			irc_option_set(s, LIBIRC_OPTION_SSL_NO_VERIFY);
		}
		// Initiate the IRC server connection
		if(irc_connect(s, server, port, password, user_name, user_name, 0))
		{
			printf("Could not connect: %s\n", irc_strerror(irc_errno(s)));
			cow_irc_done(s);
			return(NULL);
		}
	}
	return(s);
}

int	cow_irc_run(irc_session_t *s, char *in_buffer)
{
	// and run into forever loop, generating events
	irc_ctx_t *ctx = (irc_ctx_t *)irc_get_ctx(s);
	ctx->use_buffer = in_buffer;
	ctx->flag = 0;
	if(irc_run(s))
	{
		printf("Could not connect or I/O error: %s\n", irc_strerror(irc_errno(s)));
		return 1;
	}
	return 1;
}

void	cow_irc_done(irc_session_t *s)
{
	irc_ctx_t *ctx = (irc_ctx_t *)irc_get_ctx(s);
	irc_disconnect(s);
	irc_destroy_session(s);
	if(ctx != NULL)
	{
		free(ctx);
	}
}
