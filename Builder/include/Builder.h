#include "Arma.h"
#pragma once    
class Builder
{
protected:
    Arma ar;
public:
    Builder(/* args */);
    ~Builder();
    void reset();
    virtual void construirCadencia() = 0;
    virtual void construirMunicao() = 0;
    virtual void construirDano() = 0;
    virtual void construirVelocidade() = 0;
    Arma getResult();
};
