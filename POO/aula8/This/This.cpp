#include <iostream>

class Classe
{
    int at1;
    float at2;
    
    public:
            void printEu()
            {
                std::cout << "Eu: " << this << "." << std::endl;
            }
            
            void printEle(Classe *that)
            {
                std::cout << "Ele: " << that << std::endl;
            }
            
            bool souEu(Classe *that)
            {
                this->printEu();
                this->printEle(that);
                return this == that;
            }
};

int main()
{
    Classe obj1, obj2;
    std::cout << obj1.souEu(&obj2) << std::endl;
    std::cout << obj1.souEu(&obj1) << std::endl;
    std::cout << obj2.souEu(&obj1) << std::endl;
    std::cout << obj2.souEu(&obj2) << std::endl;
    return 0;
}