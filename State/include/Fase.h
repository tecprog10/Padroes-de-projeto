#pragma once
#include "EstadoJogo.h"
#include "../include/Jogo.h"
class Fase : public EstadoJogo
{
private:
    sf::RectangleShape player;
public:
    Fase(Jogo* jogo);
    ~Fase();
    void executar();
    
};
