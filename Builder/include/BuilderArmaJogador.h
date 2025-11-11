#pragma once
#include "Builder.h"
class BuilderArmaJogador : public Builder
{
private:
        
public:
    BuilderArmaJogador(/* args */);
    ~BuilderArmaJogador();
    void construirCadencia();
    void construirMunicao();
    void construirDano();
    void construirVelocidade();
    
};
