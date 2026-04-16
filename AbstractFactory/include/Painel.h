#pragma once
#include <SFML/Graphics.hpp>

class Painel
{
protected:
    sf::RectangleShape shape;
public:
    Painel();
    virtual ~Painel() = default;
    virtual void desenhar(sf::RenderWindow& window);
};
