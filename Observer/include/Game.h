#pragma once
#include <SFML/Graphics.hpp>
#include "ConcreteSubject.h"
#include "Observer.h"
#include <iostream>
class Game : Observer
{
private:
	sf::RectangleShape shape;
	ConcreteSubject subject;
public:
	Game();
	void executar();
	void update();
};

