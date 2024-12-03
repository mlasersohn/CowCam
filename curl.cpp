#include <stdint.h>
#include <errno.h>

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#include <memory.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>
#include <math.h>
#include <sys/types.h>
#include <sys/timeb.h>

#include <curl/curl.h>

#include	<pthread.h>
#include	<langinfo.h>
#include	<arpa/inet.h>
#include	<netinet/in.h>
#include	<sys/socket.h>
#include	<sys/stat.h>
#include	<unistd.h>
#include	<netdb.h>
#include	<sys/shm.h>
#include	<sys/ipc.h>

struct	MyCurlData
{
	char	*data;
	int	size;
};

static size_t my_collect(void *buffer, size_t size, size_t nmemb, void *user_data)
{
	struct MyCurlData *my_stuff = (struct MyCurlData *)user_data;
	my_stuff->data = (char *)realloc(my_stuff->data, my_stuff->size + (size * nmemb) + 1);
	if(my_stuff->data != NULL)
	{
		memcpy(&my_stuff->data[my_stuff->size], buffer, size * nmemb);
		my_stuff->size += (int)(size * nmemb);
	}
	return(size * nmemb);
}

static size_t payload_source(void *ptr, size_t size, size_t nmemb, void *user_data)
{
	int r = 0;
	if(user_data != NULL)
	{
		struct MyCurlData *my_stuff = (struct MyCurlData *)user_data;
		if(my_stuff->size > 0)
		{
			if((size > 0) && (nmemb > 0) && (ptr != NULL) && (user_data != NULL))
			{
				if(my_stuff->data != NULL)
				{
					memcpy(ptr, &my_stuff->data[0], my_stuff->size);
					r = my_stuff->size;
					my_stuff->size = 0;
				}
			}
		}
	}
	return(r);
}

char	*curl(char *url, char *user_name, char *password, int binary, int *sz)
{
CURL *curl;
CURLcode res;
char namepass[128] = {0};
struct MyCurlData my_stuff;

	my_stuff.data = NULL;
	my_stuff.size = 0;

	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();
	if(curl) 
	{
		if((user_name != NULL) && (password != NULL))
		{
			strcat(namepass, user_name);
			strcat(namepass, ":");
			strcat(namepass, password);
			curl_easy_setopt(curl, CURLOPT_USERPWD, namepass);
		}
		curl_easy_setopt(curl, CURLOPT_URL, url);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_collect);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &my_stuff);
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
		 
		if(CURLE_OK != res) 
		{
			fprintf(stderr, "curl told us %d\n", res);
		}
		if(binary == 0)
		{
			if((my_stuff.size > 0) && (my_stuff.data != NULL))
			{
				my_stuff.data[my_stuff.size] = '\0';
			}
		}
	}
	curl_global_cleanup();
	*sz = my_stuff.size;
	return(my_stuff.data);
}

void	curl2(char *url, char *user_name, char *password, char *content, int sz)
{
CURL *curl;
CURLcode res;
char namepass[128] = {0};
struct MyCurlData my_stuff;

	my_stuff.data = NULL;
	my_stuff.size = 0;

	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();
	if(curl) 
	{
		my_stuff.data = content;
		my_stuff.size = sz;

		if((user_name != NULL) && (password != NULL))
		{
			strcat(namepass, user_name);
			strcat(namepass, ":");
			strcat(namepass, password);
			curl_easy_setopt(curl, CURLOPT_USERPWD, namepass);
		}
		curl_easy_setopt(curl, CURLOPT_URL, url);
		curl_easy_setopt(curl, CURLOPT_READFUNCTION, payload_source);
		curl_easy_setopt(curl, CURLOPT_READDATA, &my_stuff);
		curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
		 
		if(CURLE_OK != res) 
		{
			fprintf(stderr, "curl told us %d\n", res);
		}
	}
	curl_global_cleanup();
}
