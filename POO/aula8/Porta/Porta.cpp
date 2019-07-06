#include <iostream>

class Porta
{
    bool aberta;
    public:
            void abrir();
            void fechar();
            void situacao();
};

void Porta::abrir()
{
    aberta = true;
}

void Porta::fechar()
{
    aberta = false;
}

void Porta::situacao()
{
    std::cout << "A porta estah " << (aberta?"aberta.":"fechada.") << std::endl;
}

int main()
{
    Porta sala;
    sala.fechar();
    sala.situacao();
    sala.abrir();
    sala.situacao();
    return 0;
}