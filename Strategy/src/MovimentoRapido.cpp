#include "../include/MovimentoRapido.h"

sf::Vector2f MovimentoRapido::mover(sf::Keyboard::Key tecla)
{
    const float velocidade = 8.0f;
    if (tecla == sf::Keyboard::Key::W) return {0, -velocidade};
    if (tecla == sf::Keyboard::Key::S) return {0,  velocidade};
    if (tecla == sf::Keyboard::Key::A) return {-velocidade, 0};
    if (tecla == sf::Keyboard::Key::D) return { velocidade, 0};
    return {0, 0};
}

std::string MovimentoRapido::getNome() const
{
    return "Rapido  [1]Normal  [2]Sigilo  [3]";
}

sf::Color MovimentoRapido::getCor() const
{
    return sf::Color(255, 100, 100);
}
