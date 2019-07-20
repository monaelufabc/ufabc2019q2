#include <iostream>

class Pai
{
	public:
		Pai()
		{
			std::cout << "ESTOU NO CONSTRUTOR VAZIO DE PAI\n";
		}
		Pai(int x)
		{
			std::cout << "ESTOU NO CONSTRUTOR INT ("<< x << ") DE PAI\n";
		}
};

class Filho : public Pai
{
	public:
		Filho(int x):Pai(x)
		{
			std::cout << "ESTOU NO CONSTRUTOR INT DE FILHO\n";
		}
};

int main()
{
	Filho obj(666);
	return 0;
}
