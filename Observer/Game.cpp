#include "Game.h"

Game::Game()
{
    shape.setSize(sf::Vector2f(200, 200));
    shape.setFillColor(sf::Color::White);
    subject.Attach(static_cast<Observer*>(this));
}
void Game::update() {
    bool state = subject.getState();
    if (state == true) {
        shape.setFillColor(sf::Color::Green);
    }
    else {
        shape.setFillColor(sf::Color::White);
    }
}

void Game::executar()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hello SFML Window");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::W)
                    subject.changeState();
                else if (event.key.code == sf::Keyboard::Escape)
                    window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.draw(shape);
        window.display();
    }
}
