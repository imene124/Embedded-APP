#include <server.h>


// function bind pour affecter au socket IP adress and nbre for port 
struct sockaddr_in servor_fields ;
//initialization for fields of struct
memset (&servor_fields , '\0' ,sizeof(servor_fields));
servor_fields.sin_family =AF_INET ;
servor_fields . sin_port =htons(5000); //transforme ordre des octets 5000 du host en octet du reseau 
servor_fields .sin_addr. s_addr  = inet_addr ("192.168.1.10"); //convert data of adress in binary form dans l'ordre des octets du reseau


//int bind(int socket, const struct sockaddr *address,socklen_t address_len);
// declaration socket for client or servor , Pointe vers une structure sockaddr contenant l'adresse à lier au socket. 
// Spécifie la longueur de la structure sockaddr pointée par l'argument d'adresse.

if((bind(Ss, (struct sockaddr*)&servor_fields, sizeof(struct sockaddr )))<0)
{
    std::cout<<"SERVOR : ERROR for ADRESS"<<std::endl ;
    exit(0);
}
