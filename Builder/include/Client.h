#pragma once
#include "Director.h"
#include "BuilderArmaBoss.h"
#include "BuilderArmaEsqueleto.h"
#include "BuilderArmaJogador.h"
class Client
{
private:
    Director director;
    BuilderArmaBoss bossBuilder;
    BuilderArmaEsqueleto esqueletoBuilder;
    BuilderArmaJogador jogadorBuilder;
public:
    Client();
    ~Client();
    void executar();
};
