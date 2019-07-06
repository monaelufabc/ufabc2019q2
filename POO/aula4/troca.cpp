#include <iostream>

void troca(int*, int*);

int main()
{
    int a, b;
    a = 10;
    b = 7;
    
    std::cout << "ANTES" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    
    troca(&a, &b);
    
    std::cout << "DEPOIS" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    
    return 0;
}

void troca(int *pa, int *pb)
{
    int aux = *pa;
    *pa = *pb;
    *pb = aux;
}