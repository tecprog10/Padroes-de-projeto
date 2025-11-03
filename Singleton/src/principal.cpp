#include "../include/Principal.h"


void Principal::atualizarTexto(){
    std::stringstream ss;
    ss <<"Endereco do singleton: " << static_cast<void*>(singletonP); 
    txt.setString(ss.str());
}

void Principal::AlocarSingleton()
{
    singletonP = Singleton::getInstance();
    atualizarTexto();
}
void Principal::desalocarSingleton()
{
    singletonP = nullptr;
    atualizarTexto();
}
Principal::Principal() :
    fonte("../../Timeline.ttf"),
    txt(fonte),
    instrucao(fonte),
    singletonP(nullptr) 
{
    instrucao.setString("Pressione E para alocar o singleton\nPressione W para zerar o ponteiro do singleton\n\nMesmo sendo criado varias vezes o endereco continua \no mesmo, ou seja, a variavel e sempre a mesma.");
    instrucao.setCharacterSize(25);
    instrucao.setPosition({100.f, 70.f});
    instrucao.setFillColor(sf::Color::White);
    desalocarSingleton();
    txt.setCharacterSize(32);
    txt.setFillColor(sf::Color::White);
    txt.setPosition({100.f, 350.f}); 
}

void Principal::executar()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Singleton Pattern");

    while (window.isOpen())
    {
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }

            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->code == sf::Keyboard::Key::Escape){
                        window.close();
                }
                else if(keyPressed->code == sf::Keyboard::Key::E){
                    AlocarSingleton();
                }
                else if(keyPressed->code == sf::Keyboard::Key::W){
                    desalocarSingleton();
                }
                    
            }
        }

        window.clear(sf::Color::Black);
        window.draw(instrucao);
        window.draw(txt);
        window.display();
    }
}