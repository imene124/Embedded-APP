#include "../inc/config_codec.h"
int main()
{
    ConfigCodec parser;
    parser.readconfigurationfile();
    std::cout << "id = " << parser.getId()<< std::endl;
    std::cout << "Type = "<< parser.getType()<< std::endl;
    std::cout << "Gap = " << parser.getGap()<< std::endl;
    return 0;
}

