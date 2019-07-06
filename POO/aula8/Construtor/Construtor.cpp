#include <iostream>

class Construtor
{
    private:
            int att;
    public:
            Construtor();
};

Construtor::Construtor()
{
    std::cout << "Oi! Estou no construtor. Eh quentinho!" << std::endl;
}

int main()
{
    Construtor obj1, *obj2, *obj3;
    std::cout << "Vou instanciar o obj2" << std::endl;
    obj2 = new Construtor();
    std::cout << "Vou instanciar o obj3" << std::endl;
    obj3 = new Construtor();
    return 0;
}