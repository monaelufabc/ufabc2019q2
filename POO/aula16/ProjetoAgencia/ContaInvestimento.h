#ifndef __CONTA_H__
	#include "Conta.h"
	#define __CONTA_H__
#endif

class ContaInvestimento : public Conta
{
	private:
		float taxaRendimento;
		float taxaAdministracao;
	public:
		ContaInvestimento(std::string, std::string, float);
		void setTaxaRendimento(float);
		void setTaxaAdministracao(float);
		float getTaxaRendimento();
		float getTaxaAdministracao();
		void correcao();
		void extrato();
};
