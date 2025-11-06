#include <SFML/Graphics.hpp>

class Jogador
{
private:
    sf::RectangleShape shape;
    sf::Vector2f vel;
public:
    sf::RectangleShape getShape();
    void adicionarVelocidade(sf::Vector2f vell);
    void move();
    Jogador();
    ~Jogador();
};