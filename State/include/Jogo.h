#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include "EstadoJogo.h"
#include "Menu.h"
#include "Fase.h"
class Jogo
{
private:
	EstadoJogo* estadojogo;
public:
	sf::RenderWindow window;
	Jogo();
	void setEstado(EstadoJogo* estado);
	void executar();
};

