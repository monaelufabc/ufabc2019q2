#include <iostream>

int main()
{
    int anoAtual, anoNasc;
    std::string nome;
    
    std::cin >> anoAtual >> nome >> anoNasc;
    std::cout << nome << ", voce completa " << (anoAtual - anoNasc) << " anos de idade neste ano." << std::endl;
    
    return 0;
}