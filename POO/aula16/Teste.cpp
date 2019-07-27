#include <iostream>

struct Pai
{
	int x;
};

struct Filho : Pai
{
};

int main()
{
	struct Filho obj;
	obj.x = 10;
	return 0;
}
