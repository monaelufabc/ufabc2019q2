#include "ContaInvestimento.h"

ContaInvestimento::ContaInvestimento(std::string nome, std::string cpf, float taxa) : Conta(nome, cpf)
{
	this->setTaxaRendimento(taxa);
	this->setTaxaAdministracao(0);
}

void ContaInvestimento::setTaxaRendimento(float taxa)
{
	this->taxaRendimento = taxa;
}

void ContaInvestimento::setTaxaAdministracao(float taxa)
{
	this->taxaAdministracao = taxa;
}

float ContaInvestimento::getTaxaRendimento()
{
	return this->taxaRendimento;
}

float ContaInvestimento::getTaxaAdministracao()
{
	return this->taxaAdministracao;
}

void ContaInvestimento::correcao()
{
	this->setSaldo(this->getSaldo() * (1.0f+(this->getTaxaRendimento()/100.0f)));
}

void ContaInvestimento::extrato()
{
	Conta::extrato();
	std::cout << "TAXA DE RENDIMENTO: " << this->getTaxaRendimento() << "\%a.m." << std::endl;
	std::cout << "TAXA DE ADMINISTRACAO: " << this->getTaxaAdministracao() << "\%a.m." << std::endl;
	std::cout << "===========================================" << std::endl;
}
