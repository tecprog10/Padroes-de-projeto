#include "../include/Principal.h"

Principal::Principal()
:window(sf::VideoMode({800, 600}), "Teste")
{
    window.setFramerateLimit(30);
}

Principal::~Principal(){

}

void Principal::executar()
{


    while (window.isOpen())
    {
        

        jogador.adicionarVelocidade(sf::Vector2f(0, 0.5));
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }

            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->code == sf::Keyboard::Key::Escape){
                        window.close();
                }   
                if (keyPressed->code == sf::Keyboard::Key::W){
                        jogador.adicionarVelocidade(sf::Vector2f(0, -2));
                }
                if (keyPressed->code == sf::Keyboard::Key::S){
                        jogador.adicionarVelocidade(sf::Vector2f(0, 2));
                }
                if (keyPressed->code == sf::Keyboard::Key::A){
                        jogador.adicionarVelocidade(sf::Vector2f(-2, 0));
                }
                if (keyPressed->code == sf::Keyboard::Key::D){
                        jogador.adicionarVelocidade(sf::Vector2f(2, 0));
                }

            }
        }

        jogador.move();

        window.clear(sf::Color::Black);
        window.draw(jogador.getShape());
        window.display();
    }
}