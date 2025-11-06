#include "../include/Menu.h"
#include "../include/Fase.h"
#include <iostream>
Menu::Menu(Jogo* pjogo)
:EstadoJogo(pjogo), txt(fonte)
{
    txt.setCharacterSize(32);
    txt.setPosition(sf::Vector2f(200,200));
    txt.setString("Pressione S  para comecar o jogo");        
    txt.setFillColor(sf::Color::White);
}
Menu::~Menu(){

}
void Menu::executar()
{
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
                        pJogo->window.close();
                }
                if(keyPressed->code == sf::Keyboard::Key::S){
                        pJogo->setEstado(static_cast<EstadoJogo*>(new Fase(pJogo)));
                        return;
                }
            }
        }
        pJogo->window.clear(sf::Color::Black);
        pJogo->window.draw(txt);
        pJogo->window.display();
    }
