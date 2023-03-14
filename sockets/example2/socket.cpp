//for sockets function
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/types.h>

#include <string> //for memset 
#include <iostream>

using namespace std;

int main(){

    string a;

    a="hello";


    char* val;

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

    read(client,(char *)&val,sizeof(val));

    std::cout<<"client says: buffer is come "<<(char *)&val<<endl;
    // memset(a,0,sizeof(a));

    close(client);

    return 0;
}