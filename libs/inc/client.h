#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

//creation for socket 
int sd ;
if (sd = socket(int AF_INET , int SOCK_STREAM ,0 )<0)
{
    std::cout<<"CLIENT : ERROR for building a socket "<<std::endl ;
    exit(0);
}



