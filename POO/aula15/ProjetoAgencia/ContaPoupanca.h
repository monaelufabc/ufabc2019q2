#include "Conta.h"
#include "Data.h"

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
