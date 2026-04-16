#include "../include/Botao.h"

Botao::Botao()
{
    shape.setSize(sf::Vector2f(200, 60));
    shape.setPosition(sf::Vector2f(300, 340));
}

void Botao::desenhar(sf::RenderWindow& window)
{
    window.draw(shape);
}
