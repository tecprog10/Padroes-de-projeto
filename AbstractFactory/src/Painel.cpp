#include "../include/Painel.h"

Painel::Painel()
{
    shape.setSize(sf::Vector2f(600, 100));
    shape.setPosition(sf::Vector2f(100, 160));
}

void Painel::desenhar(sf::RenderWindow& window)
{
    window.draw(shape);
}
