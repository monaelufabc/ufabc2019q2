#include <iostream>

class Tempo
{
	private:
		int segundos;
	public:
		Tempo()
		{	}
		
		Tempo(int hora, int minuto, int segundo)
		{
			this->setSegundos(hora*3600+minuto*60+segundo);
		}

		void setSegundos(int s)
		{
			this->segundos = s;
		}

		int getSegundos()
		{
			return this->segundos;
		}

		friend int qtdHoras(Tempo *);
};

int qtdHoras(Tempo *t)
{
	int i;
	for(i=0; t->segundos>=3600; i++, t->segundos-=3600);
	return i;
}

int main()
{
	int hora, minuto, segundo;
	Tempo *obj;

	std::cin >> hora >> minuto >> segundo;
	obj = new Tempo(hora, minuto, segundo);
	
	std::cout << "obj->segundos: " << obj->getSegundos() << std::endl;
	std::cout << "qtdHoras(obj): " << qtdHoras(obj) << std::endl;
	std::cout << "obj->segundos: " << obj->getSegundos() << std::endl;

	return 0;
}
