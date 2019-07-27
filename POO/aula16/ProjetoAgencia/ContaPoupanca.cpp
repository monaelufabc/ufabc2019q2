#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(std::string cpf, std::string nome, int dia, int mes, int ano, float taxa):Conta(cpf, nome)
{
	this->setAniversario(Data(dia, mes, ano));
	this->setTaxa(taxa);
}

void ContaPoupanca::setAniversario(Data data)
{
	this->aniversario = data;
}

void ContaPoupanca::setTaxa(float taxa)
{
	this->taxa = taxa;
}

Data ContaPoupanca::getAniversario()
{
	return this->aniversario;
}

float ContaPoupanca::getTaxa()
{
	return this->taxa;
}

void ContaPoupanca::correcao()
{
	this->setSaldo(this->getSaldo() * 1.02);
}

void ContaPoupanca::extrato()
{
	Conta::extrato();
	std::cout << "ANIVERSARIO: " << this->getAniversario().getDia() << std::endl;
    std::cout << "===========================================" << std:: endl;
}
