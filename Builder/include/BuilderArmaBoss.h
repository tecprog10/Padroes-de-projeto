#pragma once
#include "Builder.h"
class BuilderArmaBoss : public Builder
{
private:
    /* data */
public:
    BuilderArmaBoss(/* args */);
    ~BuilderArmaBoss();
    
    void construirCadencia();
    void construirMunicao();
    void construirDano();
    void construirVelocidade();
    
};

