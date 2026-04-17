#include "../include/Jogador.h"
#include "../include/MovimentoNormal.h"

Jogador::Jogador()
    : estrategia(new MovimentoNormal())
{
    sprite.setSize({50.0f, 50.0f});
    sprite.setPosition({375.0f, 275.0f});
    sprite.setFillColor(estrategia->getCor());
}

Jogador::~Jogador()
{
    delete estrategia;
}

void Jogador::setEstrategia(EstrategiaMovimento* e)
{
    delete estrategia;
    estrategia = e;
    sprite.setFillColor(estrategia->getCor());
}

void Jogador::processar(sf::Keyboard::Key tecla)
{
    sprite.move(estrategia->mover(tecla));
}

void Jogador::desenhar(sf::RenderWindow& window)
{
    window.draw(sprite);
}

std::string Jogador::getEstrategiaNome() const
{
    return estrategia->getNome();
}

sf::Color Jogador::getEstrategiaCor() const
{
    return estrategia->getCor();
}
