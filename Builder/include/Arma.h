#pragma once    
class Arma
{
private:
    float velocidade;
    int municao;
    float cadencia;
    float dano;

    
public:
    Arma();
    ~Arma();
    void setVelocidade(float vel);
    void setCadencia(float cadencia);
    void setDano(float dano);
    void setMunicao(int municao);
    
};

