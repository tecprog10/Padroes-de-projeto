#include "../include/Jogo.h"

Jogo::Jogo() :
    fabrica(nullptr),
    botao(nullptr),
    painel(nullptr),
    temaDark(true),
    fonte("../../Timeline.ttf"),
    txtTema(fonte),
    txtInstrucao(fonte)
{
    txtTema.setCharacterSize(40);
    txtTema.setPosition(sf::Vector2f(100, 60));

    txtInstrucao.setCharacterSize(20);
    txtInstrucao.setPosition(sf::Vector2f(100, 520));
    txtInstrucao.setString("Pressione T para trocar o tema  |  Escape para sair");

    aplicarFabrica();
}

Jogo::~Jogo()
{
    delete fabrica;
    delete botao;
    delete painel;
}

void Jogo::aplicarFabrica()
{
    delete fabrica;
    delete botao;
    delete painel;

    if (temaDark)
    {
        fabrica = new FabricaTemaDark();
        txtTema.setString("Tema: Dark");
        txtTema.setFillColor(sf::Color::White);
        txtInstrucao.setFillColor(sf::Color::White);
    }
    else
    {
        fabrica = new FabricaTemaLight();
        txtTema.setString("Tema: Light");
        txtTema.setFillColor(sf::Color::Black);
        txtInstrucao.setFillColor(sf::Color::Black);
    }

    botao  = fabrica->criarBotao();
    painel = fabrica->criarPainel();
}

void Jogo::trocarTema()
{
    temaDark = !temaDark;
    aplicarFabrica();
}

void Jogo::executar()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Exemplo Abstract Factory");

    while (window.isOpen())
    {
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();

            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->code == sf::Keyboard::Key::Escape)
                    window.close();
                else if (keyPressed->code == sf::Keyboard::Key::T)
                    trocarTema();
            }
        }

        sf::Color bg = temaDark ? sf::Color(20, 20, 20) : sf::Color(240, 240, 240);
        window.clear(bg);

        painel->desenhar(window);
        botao->desenhar(window);
        window.draw(txtTema);
        window.draw(txtInstrucao);

        window.display();
    }
}
