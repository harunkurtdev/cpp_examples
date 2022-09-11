#include <iostream>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <sys/types.h>

using namespace std;

int main(){

    int serverSock{0};

    struct sockaddr_in addr;
    serverSock = socket(AF_INET, SOCK_STREAM, 0);

   
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    addr.sin_family = AF_INET;
    addr.sin_port = htons(5555);

    std::connect(serverSoc,(struct sockaddr *)&addr,sizeof(addr));

    cout<<"Connected to Server"<<endl;

    char buffer[1024]={'h','e','l','l','o'};

    write()

    write()
   
}