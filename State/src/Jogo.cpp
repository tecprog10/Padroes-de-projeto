#include "../include/Jogo.h"


Jogo::Jogo()   
:window(sf::VideoMode({800, 600}), "Estado Menu"),
estadojogo(nullptr)
{
    setEstado(static_cast<EstadoJogo*>(new Menu(this)));
}

void Jogo::executar()
{
       while (window.isOpen()){
            estadojogo->executar();
        }
    
}

void Jogo::setEstado(EstadoJogo* estado)
{

     if (estadojogo != nullptr)
        delete estadojogo;
    estadojogo = estado;
}