#include "Lista.h"

Lista::Lista()
{
	this->setPrimeiro(NULL);
}

void Lista::setPrimeiro(Item *primeiro)
{
	this->primeiro = primeiro;
}

Item *Lista::getPrimeiro()
{
	return this->primeiro;
}

void Lista::inserir(Item *novo)
{
	Item *atual = this->getPrimeiro(), *ant = NULL;
	while(atual != NULL && atual->getChave() < novo->getChave())
	{
		ant = atual;
		atual = atual->getProximo();
	}
	novo->setProximo(atual);
	if(ant != NULL)
	{
		ant->setProximo(novo);
	}
	else
	{
		this->setPrimeiro(novo);
	}
}

Item *Lista::remover(int){ return NULL;	}

bool Lista::buscar(int chave)
{
	Item *it = this->getPrimeiro();
	while(it != NULL && it->getChave() != chave)
	{
		it = it->getProximo();
	}
	return it!=NULL?true:false;
}
void Lista::mostrar()
{
	Item *it = this->getPrimeiro();
	while(it != NULL)
	{
		std::cout << it->getChave() << std::endl;
		it = it->getProximo();
	}
}

bool Lista::isVazia()
{
	return this->getPrimeiro() == NULL;
}
