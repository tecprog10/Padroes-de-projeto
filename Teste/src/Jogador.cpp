#include "../include/Jogador.h"

Jogador::Jogador(){
    
    vel = sf::Vector2f(0,0);
    shape.setPosition(sf::Vector2f(100, 100));
    shape.setFillColor(sf::Color::White);
    shape.setSize(sf::Vector2f(100, 100));
   
}
Jogador::~Jogador(){

}

void Jogador::adicionarVelocidade(sf::Vector2f vell){
    vel += vell;
}

void Jogador::move(){
    shape.move(vel);
}

sf::RectangleShape Jogador::getShape(){
    return shape;
}