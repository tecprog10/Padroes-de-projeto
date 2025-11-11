#include "../include/Director.h"
Director::Director(Builder* builderp)
{
    builder = builderp;
}

Director::~Director()
{
    builder = nullptr;
}

Arma Director::construct(){
    builder->construirCadencia();
    builder->construirDano();
    builder->construirMunicao();
    builder->construirVelocidade();
    return builder->getResult();
}

void Director::setBuilder(Builder*  build){
    builder = build;
}
