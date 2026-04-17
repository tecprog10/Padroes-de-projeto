#include "../include/MovimentoNormal.h"

sf::Vector2f MovimentoNormal::mover(sf::Keyboard::Key tecla)
{
    const float velocidade = 3.0f;
    if (tecla == sf::Keyboard::Key::W) return {0, -velocidade};
    if (tecla == sf::Keyboard::Key::S) return {0,  velocidade};
    if (tecla == sf::Keyboard::Key::A) return {-velocidade, 0};
    if (tecla == sf::Keyboard::Key::D) return { velocidade, 0};
    return {0, 0};
}

std::string MovimentoNormal::getNome() const
{
    return "Normal  [1]Rapido  [2]Sigilo  [3]";
}

sf::Color MovimentoNormal::getCor() const
{
    return sf::Color(100, 180, 255);
}
