#include <stdio.h>
#include <stdlib>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define BUF_SIZE 30

void error_handling(char *message);

int main( argc, char *argv[])
{
    int serv_sock;
    char message[BUF_SIZE];
    int str_len;
    socklen_t clnt_adr_sz;
    
    struct sockaddr_in serv_adr, clnt_adr;
    if( argc != 2){
        printf("Usage : %s <port>\n", argv[0]);
        exit(1);
    }

    serv_sock = sockt(PF_INET, SOCK_DGRAM, 0);
    if( serv_sock == -1)
        error_handling("UDP socket creation error");

    memset("&serv_adr, 0, size
}

