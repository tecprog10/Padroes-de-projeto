#include "../include/Client.h"
#include <SFML/Graphics.hpp>


Client::Client(/* args */):
director(nullptr)
{
    
}

Client::~Client()
{
}

void Client::executar(){
    director.setBuilder(static_cast<Builder*>(&bossBuilder));
    director.construct();
}
