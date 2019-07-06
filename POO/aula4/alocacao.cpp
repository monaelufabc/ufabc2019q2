#include <iostream>

int main()
{
    int *pi;
    int i;
    
    std::cout << pi << std::endl;
    
    pi = new int;
    
    std::cout << pi << std::endl;
    
    *pi = 7;
    
    std::cout << *pi << std::endl;
    
    delete pi;
    
    std::cout << pi << std::endl;
    std::cout << *pi << std::endl;
    //*pi = 7;
    //std::cout << *pi << std::endl;
    
    /*
    while(1)
    {
        pi = new int;
    }
    */
    pi = new int;
    *pi = 10;
    while(1)
    {
        *pi = *pi + 1;
        std::cout << *pi << std::endl;
        pi = pi + 1;
    }
    return 0;
}