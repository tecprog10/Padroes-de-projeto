#include "../include/MovimentoSigilo.h"

sf::Vector2f MovimentoSigilo::mover(sf::Keyboard::Key tecla)
{
    const float velocidade = 1.0f;
    if (tecla == sf::Keyboard::Key::W) return {0, -velocidade};
    if (tecla == sf::Keyboard::Key::S) return {0,  velocidade};
    if (tecla == sf::Keyboard::Key::A) return {-velocidade, 0};
    if (tecla == sf::Keyboard::Key::D) return { velocidade, 0};
    return {0, 0};
}

std::string MovimentoSigilo::getNome() const
{
    return "Sigilo  [1]Normal  [2]Rapido  [3]";
}

sf::Color MovimentoSigilo::getCor() const
{
    return sf::Color(80, 200, 120);
}
