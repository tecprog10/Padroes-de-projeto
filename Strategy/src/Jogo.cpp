#include "../include/Jogo.h"

Jogo::Jogo()
    : window(sf::VideoMode({800, 600}), "Strategy - Movimento do Jogador"),
      fonte("../../Timeline.ttf"),
      estrategiaNormal(new MovimentoNormal()),
      estrategiaRapida(new MovimentoRapido()),
      estrategiaSigilo(new MovimentoSigilo())
{
}

Jogo::~Jogo()
{
    delete estrategiaNormal;
    delete estrategiaRapida;
    delete estrategiaSigilo;
}

void Jogo::executar()
{
    sf::Text txtEstrategia(fonte);
    txtEstrategia.setCharacterSize(22);
    txtEstrategia.setPosition({20.0f, 20.0f});

    sf::Text txtInstrucao(fonte);
    txtInstrucao.setCharacterSize(18);
    txtInstrucao.setFillColor(sf::Color(200, 200, 200));
    txtInstrucao.setPosition({20.0f, 560.0f});
    txtInstrucao.setString("WASD: mover   ESC: sair");

    while (window.isOpen())
    {
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();

            if (const auto* key = event->getIf<sf::Event::KeyPressed>())
            {
                if (key->code == sf::Keyboard::Key::Escape)
                    window.close();

                if (key->code == sf::Keyboard::Key::Num1)
                    jogador.setEstrategia(new MovimentoNormal());
                else if (key->code == sf::Keyboard::Key::Num2)
                    jogador.setEstrategia(new MovimentoRapido());
                else if (key->code == sf::Keyboard::Key::Num3)
                    jogador.setEstrategia(new MovimentoSigilo());
                else
                    jogador.processar(key->code);
            }
        }

        txtEstrategia.setString("Estrategia: " + jogador.getEstrategiaNome());
        txtEstrategia.setFillColor(jogador.getEstrategiaCor());

        window.clear(sf::Color(30, 30, 30));
        jogador.desenhar(window);
        window.draw(txtEstrategia);
        window.draw(txtInstrucao);
        window.display();
    }
}
