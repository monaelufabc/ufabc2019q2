#include <iostream>

class Ponto
{
	private:
		float x, y;
	public:
		Ponto();
		Ponto(float, float);
		void setX(float);
		void setY(float);
		float getX();
		float getY();
		Ponto operator ++(); //++i prefixado
		Ponto operator ++(int); //i++ posfixado
};

Ponto::Ponto()
{	}

Ponto::Ponto(float x, float y)
{
	this->setX(x);
	this->setY(y);
}

void Ponto::setX(float x)
{
	this->x = x;
}

void Ponto::setY(float y)
{
	this->y = y;
}

float Ponto::getX()
{
	return this->x;
}

float Ponto::getY()
{
	return this->y;
}

Ponto Ponto::operator ++() //++i prefixado
{
	this->setX(this->getX() + 1);
	this->setY(this->getY() + 1);
	return *this;
}

Ponto Ponto::operator ++(int) //i++ posfixado
{
	Ponto pt(this->getX(), this->getY());
	this->setX(this->getX() + 1);
	this->setY(this->getY() + 1);
	return pt;	
}

int main()
{
	Ponto p1(1,1), p2(1,1), pr1, pr2;
	
	std::cout << "P1: " << p1.getX() << " " << p1.getY() << std::endl;
	pr1 = p1++;
	std::cout << "P1: " << p1.getX() << " " << p1.getY() << std::endl;
	std::cout << "PR1: " << pr1.getX() << " " << pr1.getY() << std::endl;
	std::cout << "P2: " << p2.getX() << " " << p2.getY() << std::endl;
	pr2 = ++p2;
	std::cout << "P2: " << p2.getX() << " " << p2.getY() << std::endl;
	std::cout << "PR2: " << pr2.getX() << " " << pr2.getY() << std::endl;
	return 0;
}
