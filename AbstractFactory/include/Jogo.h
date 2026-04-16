#pragma once
#include <SFML/Graphics.hpp>
#include "FabricaUI.h"
#include "FabricaTemaDark.h"
#include "FabricaTemaLight.h"

class Jogo
{
private:
    FabricaUI* fabrica;
    Botao* botao;
    Painel* painel;
    bool temaDark;
    sf::Font fonte;
    sf::Text txtTema;
    sf::Text txtInstrucao;
    void trocarTema();
    void aplicarFabrica();
public:
    Jogo();
    ~Jogo();
    void executar();
};
