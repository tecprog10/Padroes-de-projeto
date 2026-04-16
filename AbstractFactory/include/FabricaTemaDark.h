#pragma once
#include "FabricaUI.h"
#include "BotaoDark.h"
#include "PainelDark.h"

class FabricaTemaDark : public FabricaUI
{
public:
    FabricaTemaDark();
    Botao* criarBotao() override;
    Painel* criarPainel() override;
};
