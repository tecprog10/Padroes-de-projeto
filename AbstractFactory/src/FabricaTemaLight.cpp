#include "../include/FabricaTemaLight.h"

FabricaTemaLight::FabricaTemaLight() {}

Botao* FabricaTemaLight::criarBotao()
{
    return new BotaoLight();
}

Painel* FabricaTemaLight::criarPainel()
{
    return new PainelLight();
}
