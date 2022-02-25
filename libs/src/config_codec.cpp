#include "../inc/config_codec.h"
#include <fstream>
#include <iostream>
#include <string>
#include <map>

 void ConfigCodec::readconfigurationfile()
 {
    
   std::ifstream indata("../../config/config.txt", std::ios::in);
    if(indata.is_open())
    {
        std::map<std::string,std::string> mp;
        std::string key,value;
        std::cout << "Reading from the file" << std::endl;
        
        while(indata >> key )
        {
            indata >> value >> value ;
            mp [key] = value ;
        }
        ConfigCodec::parameter.id=std::stoi(mp ["ID"]);
        ConfigCodec::parameter.type=std::stoi(mp ["TYPE"]);
        ConfigCodec::parameter.gap=std::stoi(mp ["GAP"]);
        indata.close();
    }
    else
    {
        std::cout << "Error: file could not be opened" << std::endl;
    }
}   