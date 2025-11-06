#include <SFML/Graphics.hpp>
#include "Jogador.h"
class Principal
{
private:
    sf::RenderWindow window;
    Jogador jogador;
public:
    Principal();
    ~Principal();
    void executar();
};
