#pragma once
#include "FabricaUI.h"
#include "BotaoLight.h"
#include "PainelLight.h"

class FabricaTemaLight : public FabricaUI
{
public:
    FabricaTemaLight();
    Botao* criarBotao() override;
    Painel* criarPainel() override;
};
