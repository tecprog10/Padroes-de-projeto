#include "../include/BuilderArmaJogador.h"
BuilderArmaJogador::BuilderArmaJogador(/* args */)
:Builder()
{
}

BuilderArmaJogador::~BuilderArmaJogador()
{
}

void BuilderArmaJogador::construirCadencia(){
    ar.setCadencia(10);
}

void BuilderArmaJogador::construirDano(){
    ar.setDano(20);
}

void BuilderArmaJogador::construirMunicao(){
    ar.setMunicao(20);
}
void BuilderArmaJogador::construirVelocidade(){
    ar.setVelocidade(25);
}