#include "../include/Fase.h"
#include "../include/Menu.h"

Fase::~Fase(){

}
Fase::Fase(Jogo* pjogo):
    EstadoJogo(pjogo)
{
    player.setSize(sf::Vector2f(50, 50));
    player.setFillColor(sf::Color::White);
}


void Fase::executar(){
        while (const auto event = pJogo->window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                pJogo->window.close();
            }

            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->code == sf::Keyboard::Key::Escape)
                {
                    pJogo->setEstado(static_cast<EstadoJogo*>(new Menu(pJogo)));
                    return;
                }    
                if(keyPressed->code == sf::Keyboard::Key::S){
                    player.move(sf::Vector2f(0, 5));
                }
                else if(keyPressed->code == sf::Keyboard::Key::W){
                    player.move(sf::Vector2f(0, -5));
                }
                if(keyPressed->code == sf::Keyboard::Key::A){
                    player.move(sf::Vector2f(-5, 0));
                }
                else if(keyPressed->code == sf::Keyboard::Key::D){
                    player.move(sf::Vector2f(5, 0));
                }
                
            }
        }
        pJogo->window.clear(sf::Color::Magenta);
        pJogo->window.draw(player);
        pJogo->window.display();
}