#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "EstrategiaMovimento.h"

class Jogador
{
private:
    sf::RectangleShape sprite;
    EstrategiaMovimento* estrategia;
public:
    Jogador();
    ~Jogador();
    void setEstrategia(EstrategiaMovimento* e);
    void processar(sf::Keyboard::Key tecla);
    void desenhar(sf::RenderWindow& window);
    std::string getEstrategiaNome() const;
    sf::Color getEstrategiaCor() const;
};
