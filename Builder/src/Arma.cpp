
#include "../include/Arma.h"
Arma::Arma(/* args */)
{
    velocidade = 0;
    cadencia = 0;
    dano = 0;
    municao = 0;
}

Arma::~Arma()
{
}

void Arma::setVelocidade(float vel){
    velocidade = vel;
}
void Arma::setCadencia(float cad){
    cadencia = cad;
}
void Arma::setDano(float dmg){
    dano = dmg;
}
void Arma::setMunicao(int munic){
    municao = munic;
}
    