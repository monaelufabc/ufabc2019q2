#include <iostream>
#include <stdexcept>

class DivideByZeroException : public std::runtime_error
{
	public:
		DivideByZeroException() : runtime_error("Erro: Divisao por zero!")
		{	}
};

float divisao(int a, int b) throw(DivideByZeroException)
{
	if(b != 0)
	{
		return a/(float)b;
	}
	else
	{
		throw DivideByZeroException();
	}
}

int main()
{
	int a, b;
	while(std::cin >> a >> b)
	{
		try
		{
			std::cout << "Resultado: " << divisao(a, b) << std::endl;
		}
		catch(DivideByZeroException dbze)
		{
			std::cerr << dbze.what() << std::endl;
		}
	}
	return 0;
}
