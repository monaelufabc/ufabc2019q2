#include <iostream>

class A
{
	public:
		int a, b, c;
		A()
		{
			std::cout << "Construtor A" << std::endl;
		}
};

class B : virtual public A
{
	public:
		int d, e, f;
		B()
		{
			std::cout << "Construtor B" << std::endl;
		}
};

class C : virtual public A
{
	public:
		int g, h, i;
		C()
		{
			std::cout << "Construtor C" << std::endl;
		}
};

class D : public B, public C
{
	public:
		int j, k, l;
		D()
		{
			std::cout << "Construtor D" << std::endl;
		}
};

int main()
{
	class D obj;
	obj.j = 10;
	obj.g = 20;
	obj.d = 30;
	obj.a = 50;
	return 0;
}

