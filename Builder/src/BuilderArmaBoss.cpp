#include "../include/BuilderArmaBoss.h"

BuilderArmaBoss::BuilderArmaBoss(/* args */)
:Builder()
{
}

BuilderArmaBoss::~BuilderArmaBoss()
{
}

void BuilderArmaBoss::construirCadencia(){
    ar.setCadencia(5);
}
void BuilderArmaBoss::construirDano(){
    ar.setDano(50);
}
void BuilderArmaBoss::construirMunicao(){
    ar.setMunicao(5);
}
void BuilderArmaBoss::construirVelocidade(){
    ar.setVelocidade(30);
}
