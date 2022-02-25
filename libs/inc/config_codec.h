#ifndef CONFIGURATION_CODEC_H
#define CONFIGURATION_CODEC_HPP_
#include <iostream>

class ConfigCodec
{
    //attributs
    private:

    struct configurationParam
    {
        /* data */
        int id ;
        int gap ;
        int type;
    };

    public:
    // Methods

    configurationParam parameter; 
    void readconfigurationfile();

    int getId()
    {
        return  parameter.id;
    }

    int getType(){

        return parameter.type;
    }
    
    int getGap()
    {
        return parameter.gap;
    }
    
};
 
#endif