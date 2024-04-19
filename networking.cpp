#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

using namespace std;

#include <vector>
#include "image_memory.h"


void	request_control(ImageMemory *im, char *hostname, int port)
{
struct sockaddr_in serv_addr; 
int sock_fd;

	struct hostent *he = gethostbyname(hostname);
	char *ip_address = inet_ntoa(*(struct in_addr*)he->h_addr_list[0]);
	if(ip_address != NULL)
	{
		if((sock_fd = socket(AF_INET, SOCK_STREAM, 0)) >= 0)
		{
			memset(&serv_addr, '0', sizeof(serv_addr)); 
			serv_addr.sin_family = AF_INET;
			serv_addr.sin_port = htons(port); 
			if(inet_pton(AF_INET, ip_address, &serv_addr.sin_addr) > 0)
			{
				int done = 0;
				while((done == 0) && (im->done == 0))
				{
					if(connect(sock_fd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) > -1)
					{
						int error_happened = 0;
						while((im->done == 0) && (error_happened == 0))
						{
							int want_control = 1;
							int ctrl = 0;
							int nn = send(sock_fd, &want_control, sizeof(int), MSG_NOSIGNAL);
							if(nn == sizeof(int))
							{
								nn = read(sock_fd, &ctrl, sizeof(int));
								if(nn == sizeof(int))
								{
									im->ptz = ctrl;
									usleep(10000);
								}
								else
								{
									error_happened = 1;
								}
							}
							else
							{
								error_happened = 1;
							}
						}
						if(error_happened == 0)
						{
							int want_control = 0;
							int nn = send(sock_fd, &want_control, sizeof(int), MSG_NOSIGNAL);
						}
						close(sock_fd);
						if(im->done != 0)
						{
							done = 1;
						}
					}
					else
					{
						fprintf(stderr, "Error: Control connect failed\n");
						sleep(2);
					}
				}
			}
		}
	}
	else
	{
		fprintf(stderr, "Error: failed to resove hostname\n");
	}
}

void	send_images(ImageMemory *im, char *hostname, int port)
{
struct sockaddr_in serv_addr; 
int sock_fd;

	int done = 0;
	struct hostent *he = gethostbyname(hostname);
	char *ip_address = inet_ntoa(*(struct in_addr*)he->h_addr_list[0]);
	if(ip_address != NULL)
	{
		while((done == 0) && (im->done == 0))
		{
			if((sock_fd = socket(AF_INET, SOCK_STREAM, 0)) >= 0)
			{
				memset(&serv_addr, '0', sizeof(serv_addr)); 
				serv_addr.sin_family = AF_INET;
				serv_addr.sin_port = htons(port); 
				if(inet_pton(AF_INET, ip_address, &serv_addr.sin_addr) > 0)
				{
					if(connect(sock_fd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) > -1)
					{
						int error_happened = 0;
						while((im->done == 0) && (error_happened == 0))
						{
							if(im->ready == 1)
							{
								if(im->size > 0)
								{
									int nn = send(sock_fd, &im->size, sizeof(int), MSG_NOSIGNAL);
									if(nn == sizeof(int))
									{
										int nn = send(sock_fd, im->ptr, im->size, MSG_NOSIGNAL);
										if(nn != im->size)
										{
											error_happened = 1;
										}
									}
									else
									{
										error_happened = 1;
									}
								}
								im->ready = 0;
							}
							else
							{
								usleep(10000);
							}
						}
						if(im->done != 0)
						{
							done = 1;
						}
						close(sock_fd);
					}
					else
					{
						fprintf(stderr, "Error: Primary connect failed\n");
						sleep(2);
					}
				}
				else
				{
					fprintf(stderr, "Error: inet_pton error occured\n");
					done = 1;
				} 
			}
			else
			{
				fprintf(stderr, "Error: socket creation failed\n");
				done = 1;
			} 
		}
	}
	else
	{
		fprintf(stderr, "Error: failed to resolve host name\n");
	}
}
