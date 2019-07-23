#include <iostream>
#include "Item.h"

class Lista
{
	private:
		Item *primeiro;
	public:
		Lista();
		void setPrimeiro(Item *);
		Item *getPrimeiro();
		void inserir(Item *);
		Item *remover(int);
		bool buscar(int);
		void mostrar();
		bool isVazia();
};
