#include <iostream>
#include <cstdlib>

class Data
{
    private:
            int dia, mes, ano;
    public:
            Data();
            Data(int, int, int);
            void setDia(int);
            void setMes(int);
            void setAno(int);
            int getDia();
            int getMes();
            int getAno();
};

class Conta
{
    private:
            std::string numero;
            std::string titular;
            std::string cpf;
            bool bloqueada;
            float saldo;
    public:
            Conta();
            Conta(std::string, std::string);
            void setNumero(std::string);
            void setTitular(std::string);
            void setCpf(std::string);
            void setBloqueada(bool);
            void setSaldo(float);
            std::string getNumero();
            std::string getTitular();
            std::string getCpf();
            bool isBloqueada();
            float getSaldo();
            bool saque(float);
            bool deposito(float);
            void extrato();
            static std::string geraNumero(int);
};

class ContaPoupanca : public Conta
{
	private:
		Data aniversario;
		float taxa;
	public:
		ContaPoupanca(std::string, std::string, int, int, int, float);
		void setAniversario(Data);
		void setTaxa(float);
		Data getAniversario();
		float getTaxa();
		void correcao();
		void extrato();
};

Data::Data()
{   }

Data::Data(int d, int m, int a)
{
    this->setDia(d);
    this->setMes(m);
    this->setAno(a);
}

void Data::setDia(int d)
{
    this->dia = d;
}

void Data::setMes(int m)
{
    this->mes = m;
}

void Data::setAno(int a)
{
    this->ano = a;
}

int Data::getDia()
{
    return this->dia;
}

int Data::getMes()
{
    return this->mes;
}

int Data::getAno()
{
    return this->ano;
}

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
{	}

void ContaPoupanca::extrato()
{
	Conta::extrato();
	std::cout << "ANIVERSARIO: " << this->getAniversario().getDia() << std::endl;
    std::cout << "===========================================" << std:: endl;
}

int main()
{
	ContaPoupanca ctp("22388645633", "Monael", 18, 7, 2019, 10);
	std::cout << "CONTA POUPANCA\n";
	ctp.extrato();
	ctp.deposito(500);
	ctp.extrato();
	return 0;
}

/*
int main()
{
    Conta cta("22388645633", "Monael");
    cta.extrato();
    cta.deposito(100);
    cta.extrato();
    return 0;
}
*/
