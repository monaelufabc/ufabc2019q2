#include <iostream>

int main()
{
    int i = 7;
    int *pti;
    
    std::cout << "Endereco de i: "<< &i << std::endl;
    std::cout << "Conteudo de i: " << i << std::endl;
    
    pti = &i;
    
    std::cout << "Conteudo de pti: " << pti << std::endl;
    std::cout << "Apontado por pti: " << *pti << std::endl;
    std::cout << "Endereco de pti: " << &pti << std::endl;
    
    return 0;
}
