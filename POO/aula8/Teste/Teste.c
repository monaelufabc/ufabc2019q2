#include <stdio.h>

struct Teste
{
    int d;
    void print()
    {
        printf("d = %d\n", d);
    }
};

int main()
{
    struct Teste tst;
    tst.d = 666;
    tst.print();
    return 0;
}