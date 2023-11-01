/* A simple echo server using TCP */
#include <stdio.h>
#include <sys/types.h>
#include <sys/unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/signal.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <errno.h>
#include <string.h>
#include <strings.h>


#define SERVER_TCP_PORT 3000	/* well-known port */
#define BUFLEN		100	/* buffer length */

int echod(int);
void reaper(int);

int main(int argc, char **argv)
{
	int 	sd, new_sd, client_len, port;
	struct	sockaddr_in server, client;

	switch(argc){
	case 1:
		port = SERVER_TCP_PORT;
		break;
	case 2:
		port = atoi(argv[1]);
		break;
	default:
		fprintf(stderr, "Usage: %s [port]\n", argv[0]);
		exit(1);
	}

	/* Create a stream socket	*/	
	if ((sd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
		fprintf(stderr, "Can't creat a socket\n");
		exit(1);
	}

	/* Bind an address to the socket	*/
	bzero((char *)&server, sizeof(struct sockaddr_in));
	server.sin_family = AF_INET;
	server.sin_port = htons(port);
	server.sin_addr.s_addr = htonl(INADDR_ANY);
	if (bind(sd, (struct sockaddr *)&server, sizeof(server)) == -1){
		fprintf(stderr, "Can't bind name to socket\n");
		exit(1);
	}

	/* queue up to 5 connect requests  */
	listen(sd, 5);

	(void) signal(SIGCHLD, reaper);

	while(1) {
	  client_len = sizeof(client);
	  new_sd = accept(sd, (struct sockaddr *)&client, &client_len);
	  if(new_sd < 0){
	    fprintf(stderr, "Can't accept client \n");
	    exit(1);
	  }
	  switch (fork()){
	  case 0:		/* this will be child */
		(void) close(sd);
		exit(echod(new_sd));
	  default:		/* this is parent */
		(void) close(new_sd);
		break;
	  case -1:
		fprintf(stderr, "fork: error\n");
	  }
	}
}

/*	echod program	*/
int echod(int sd)
{
	int 	n;
	char	fileName[100];
	
	FILE *fp;
	
	while((n = read(sd, fileName, 100)) > 0){
		printf("%s\n",fileName);
		
		if(fileName[strlen(fileName)-1] = '\n')	
			fileName[strlen(fileName)-1] = '\0';
			
		printf("%s\n",fileName);
		fp = fopen(fileName,"rb");
		
		if(fp == NULL){
			
		    perror("Error!");
		    write(sd,"File was not found!",15);
		}
		
		else{
			
		printf("Selected file is not invalid\n");
		write(sd,fileName,100);
	
        while(1){
			
            unsigned char buff[BUFLEN]={0};
            int nread = fread(buff,1,BUFLEN,fp);
            printf("The Bytes read %d \n", nread);        
			
            if(nread > 0){
                printf("Transmitting \n");
                write(sd, buff, nread);
            }
            
            if (nread < BUFLEN){
                if (feof(fp)){
                    printf("End of file (EOF)!\n");
			}
                if (ferror(fp))
                    printf("Error reading!\n");
                break;
            }
        }
       }
      }
        fclose(fp);
	close(sd);
	
	return(0);
}

/*	reaper		*/
void	reaper(int sig)
{
	int	status;
	while(wait3(&status, WNOHANG, (struct rusage *)0) >= 0);
}
