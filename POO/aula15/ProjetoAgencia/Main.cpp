#include "ContaPoupanca.h"

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
