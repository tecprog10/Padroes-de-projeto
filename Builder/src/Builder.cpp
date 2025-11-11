
#include "../include/Builder.h"
Builder::Builder(/* args */)
{
}

Builder::~Builder()
{
}

void Builder::reset(){
    ar.setCadencia(0);
    ar.setVelocidade(0);
    ar.setMunicao(0);
    ar.setDano(0);
}

Arma Builder::getResult(){
    return ar;
}