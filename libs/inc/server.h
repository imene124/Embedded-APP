#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>


//on a utulisé l'adress famille IPV4 ainsi en mode connecté protocole TCP ainsi type of protocol 
//if 0 we switch tcp or udp 
int Ss ;
//creation for socket 
if (Ss = socket(int AF_INET , int SOCK_STREAM ,0 )<0)
{
    std::cout<<"SERVOR : ERROR for building a socket "<<std::endl ;
    exit(0);
}

// bind function for initilization 
struct sockaddr_in {
sa_family_t sin_family; //famille de protocole
in_port_t sin_port; //numero de port 
struct in_addr {
    in_addr_t s_addr ; 
}sin_addr; //adresse internet IPV4
char sin_zero[8]; //initialise a zero 
};






