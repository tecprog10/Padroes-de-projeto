#pragma once
#include "EstadoJogo.h"   
#include "../include/Jogo.h"
class Menu : public EstadoJogo
{
private:
    sf::Text txt;
public:
    Menu(Jogo* jogo);
    ~Menu();
    void executar();
};