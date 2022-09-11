#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>

using namespace std;

int main(){


    int server=0,client=0;

    struct sockaddr_in serverAddr;

    server =socket(AF_INET,SOCK_STREAM,0);



    return 0;
}