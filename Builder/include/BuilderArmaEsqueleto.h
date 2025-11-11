#pragma once
#include "Builder.h"
class BuilderArmaEsqueleto : public Builder
{
private:
    /* data */
public:
    BuilderArmaEsqueleto(/* args */);
    ~BuilderArmaEsqueleto();
    
    void construirCadencia();
    void construirMunicao();
    void construirDano();
    void construirVelocidade();
    
};


