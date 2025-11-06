#pragma once
#include <SFML/Graphics.hpp>

class Jogo;

class EstadoJogo
{
protected:
    sf::Font fonte;
    Jogo* pJogo = nullptr; 
public:
    EstadoJogo(Jogo* jogo);
    virtual ~EstadoJogo();
    virtual void executar() = 0;
};


