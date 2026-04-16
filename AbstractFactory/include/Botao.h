#pragma once
#include <SFML/Graphics.hpp>

class Botao
{
protected:
    sf::RectangleShape shape;
public:
    Botao();
    virtual ~Botao() = default;
    virtual void desenhar(sf::RenderWindow& window);
};
