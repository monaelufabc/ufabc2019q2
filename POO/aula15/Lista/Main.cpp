#include "Lista.h"

int main()
{
	Lista *lista = new Lista();
	int chave;
	char op;

	while(std::cin >> op)
	{
		if(op == 'I')
		{
			std::cin >> chave;
			lista->inserir(new Item(chave));
		}
		else
		{
			lista->mostrar();
		}
	}
	return 0;
}
