#pragma once
#include "EstrategiaMovimento.h"

class MovimentoSigilo : public EstrategiaMovimento
{
public:
    sf::Vector2f mover(sf::Keyboard::Key tecla) override;
    std::string getNome() const override;
    sf::Color getCor() const override;
};
