#include "../include/EstadoJogo.h"
#include "../include/Jogo.h"

EstadoJogo::EstadoJogo(Jogo* jogo):
    fonte("../../Timeline.ttf")
{
    pJogo = jogo;
}

EstadoJogo::~EstadoJogo(){

}