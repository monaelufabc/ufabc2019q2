#include <iostream>

class Pai
{
	public:
		Pai()
		{
			std::cout << "Estou no construtor do papai!\n";
		}
		Pai(int n)
		{
			std::cout << "Estou no construtor INT do papai! (" << n << ")\n";
		}
};

class Mae
{
	public:
		Mae()
		{
			std::cout << "Estou no construtor da mamae!\n";
		}
};

class Filho : Mae, Pai
{
	public:
		Filho(int n):Pai(n)
		{
			std::cout << "Estou no meu construtor (" << n << ")\n";
		}
};

int main()
{
	Filho f(666);
	return 0;
}
