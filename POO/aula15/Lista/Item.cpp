#include "Item.h"

Item::Item()
{	}

Item::Item(int chave)
{
	this->setChave(chave);
}

void Item::setChave(int chave)
{
	this->chave = chave;
}

void Item::setProximo(Item *proximo)
{
	this->proximo = proximo;
}

int Item::getChave()
{
	return this->chave;
}

Item *Item::getProximo()
{
	return this->proximo;
}
