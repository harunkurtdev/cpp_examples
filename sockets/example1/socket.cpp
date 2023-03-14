//for sockets function
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/types.h>

#include <string.h> //for memset 
#include <iostream>

using namespace std;

int main(){


    int server=0,client=0;

    struct sockaddr_in serverAddr;

    server =socket(AF_INET,SOCK_STREAM,0);

    serverAddr.sin_addr.s_addr=INADDR_ANY;
    serverAddr.sin_family=AF_INET;
    serverAddr.sin_port=htons(5555);

    bind(server,(struct sockaddr*)&serverAddr,sizeof(serverAddr));
    listen(server,0);

    std::cout<<"Listenning for client"<<endl;

    char buffer[1024]={0};

    client=accept(server,(struct sockaddr*)NULL,NULL);

    read(client,buffer,sizeof(buffer)-1);

    std::cout<<"client says: buffer is come"<<buffer<<endl;
    memset(buffer,0,sizeof(buffer));

    close(client);

    return 0;
}