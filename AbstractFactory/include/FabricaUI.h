#pragma once
#include "Botao.h"
#include "Painel.h"

class FabricaUI
{
public:
    virtual ~FabricaUI() = default;
    virtual Botao* criarBotao() = 0;
    virtual Painel* criarPainel() = 0;
};
