#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include "Singleton.h"

class Principal
{
private:
	Singleton* singletonP;
	sf::Font fonte; 
	sf::Text txt;
	sf::Text instrucao;
	void atualizarTexto();
public:
	void AlocarSingleton();
	void desalocarSingleton();
	Principal();
	void executar();
};

