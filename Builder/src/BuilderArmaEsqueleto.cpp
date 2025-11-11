#include "../include/BuilderArmaEsqueleto.h"

BuilderArmaEsqueleto::BuilderArmaEsqueleto(/* args */):
Builder()
{
}

BuilderArmaEsqueleto::~BuilderArmaEsqueleto()
{
}

void BuilderArmaEsqueleto::construirCadencia(){
    ar.setCadencia(4);
}

void BuilderArmaEsqueleto::construirVelocidade(){
    ar.setVelocidade(10);
}
void BuilderArmaEsqueleto::construirMunicao(){
    ar.setMunicao(20);
}
void BuilderArmaEsqueleto::construirDano(){
    ar.setDano(10);
}
