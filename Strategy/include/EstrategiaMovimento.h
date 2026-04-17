#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class EstrategiaMovimento
{
public:
    virtual ~EstrategiaMovimento() = default;
    virtual sf::Vector2f mover(sf::Keyboard::Key tecla) = 0;
    virtual std::string getNome() const = 0;
    virtual sf::Color getCor() const = 0;
};
