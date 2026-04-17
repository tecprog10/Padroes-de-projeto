#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "MovimentoNormal.h"
#include "MovimentoRapido.h"
#include "MovimentoSigilo.h"

class Jogo
{
private:
    sf::RenderWindow window;
    sf::Font fonte;
    Jogador jogador;
    EstrategiaMovimento* estrategiaNormal;
    EstrategiaMovimento* estrategiaRapida;
    EstrategiaMovimento* estrategiaSigilo;
public:
    Jogo();
    ~Jogo();
    void executar();
};
