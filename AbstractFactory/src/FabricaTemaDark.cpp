#include "../include/FabricaTemaDark.h"

FabricaTemaDark::FabricaTemaDark() {}

Botao* FabricaTemaDark::criarBotao()
{
    return new BotaoDark();
}

Painel* FabricaTemaDark::criarPainel()
{
    return new PainelDark();
}
