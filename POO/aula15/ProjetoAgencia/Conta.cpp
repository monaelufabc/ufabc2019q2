#include "Conta.h"

Conta::Conta()
{   }

Conta::Conta(std::string cpf, std::string nome)
{
    this->setNumero(Conta::geraNumero(10));
    this->setCpf(cpf);
    this->setTitular(nome);
    this->setSaldo(0);
    this->setBloqueada(false);
}

void Conta::setNumero(std::string num)
{
    this->numero = num;
}

void Conta::setTitular(std::string nome)
{
    this->titular = nome;
}

void Conta::setCpf(std::string ncpf)
{
    this->cpf = ncpf;
}

void Conta::setBloqueada(bool val)
{
    this->bloqueada = val;
}

void Conta::setSaldo(float sld)
{
    this->saldo = sld;
}

std::string Conta::getNumero()
{
    return this->numero;
}

std::string Conta::getTitular()
{
    return this->titular;
}

std::string Conta::getCpf()
{
    return this->cpf;
}

bool Conta::isBloqueada()
{
    return this->bloqueada;
}

float Conta::getSaldo()
{
    return this->saldo;
}

bool Conta::saque(float valor)
{
    if(this->getSaldo() >= valor && !this->isBloqueada())
    {
        this->setSaldo(this->getSaldo()-valor);
        return true;
    }
    return false;
}

bool Conta::deposito(float valor)
{
    if(!this->isBloqueada())
    {
        this->setSaldo(this->getSaldo()+valor);
        return true;
    }
    return false;
}

void Conta::extrato()
{
    std::cout << "===========================================" << std:: endl;
    std::cout << "CONTA : " << this->getNumero() << std:: endl;
    std::cout << "CPF ..: " << this->getCpf() << std::endl;
    std::cout << "NOME .: " << this->getTitular() << std::endl;
    std::cout << "SALDO : R$" << this->getSaldo() << std::endl;
    std::cout << "===========================================" << std:: endl;
}

std::string Conta::geraNumero(int n)
{
    std::string numero="";
    int i;
    std::srand(time(NULL));
    for(i=0; i<n; i++)
    {
        do
        {
            numero += (std::rand()%10)+48;
        }while(!std::isdigit(numero[i]));
    }
    return numero;
}
