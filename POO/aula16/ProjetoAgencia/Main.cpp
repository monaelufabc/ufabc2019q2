#include "ContaPoupanca.h"
#include "ContaInvestimento.h"

int main()
{
	Conta *agencia[10];
	int i;
	for(i=0; i<10; i++)
	{
		if(i%2==0)
		{
			agencia[i] = new ContaPoupanca("Fulano", "46366845812", 25, 7, 2019, 0);
		}
		else
		{
			agencia[i] = new ContaInvestimento("Beltrano", "14520396850", 10);
		}
		agencia[i]->deposito(100);
	}

	for(i=0; i<10; i++)
	{
		agencia[i]->correcao();
	}

	for(i=0; i<10; i++)
	{
		agencia[i]->extrato();
	}
	return 0;
}

/*
int main()
{
	Conta *pCt;
	ContaInvestimento ctInv("Monael", "32360556811", 10);
	ContaInvestimento *ptCtInv = &ctInv;

	pCt = &ctInv;

	ctInv.deposito(100);
	std::cout << "ctInv.extrato()\n";
	ctInv.extrato();
	std::cout << "ptCtInv->extrato()\n";
	ptCtInv->extrato();
	std::cout << "pCt->extrato()\n";
	pCt->extrato();
	
	return 0;
}
*/
/*
int main()
{
	Conta *agencia[10];
	int i;
	for(i=0; i<10; i++)
	{
		agencia[i] = new ContaPoupanca("22388645633", "Monael", 18, 7, 2019, 10);
	}
	return 0;
}
*/
/*
int main()
{
	ContaPoupanca ctp("22388645633", "Monael", 18, 7, 2019, 10);
	ctp.extrato();
	ctp.deposito(500);
	ctp.extrato();
	return 0;
}
*/
