#include "../include/Game.h"

Game::Game()
{
    shape.setSize(sf::Vector2f(200, 200));
    shape.setPosition(sf::Vector2f(300,300));
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
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Exemplo Observer");

    while (window.isOpen())
    {
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }

            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->code == sf::Keyboard::Key::W)
                    subject.changeState();
                else if (keyPressed->code == sf::Keyboard::Key::Escape)
                    window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.draw(shape);
        window.display();
    }
}