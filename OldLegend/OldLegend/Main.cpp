#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

using namespace Animals;

int main()
{
	Cat barsik(3);
	barsik.talk();
	Animal cat = barsik;
	cat.talk();
	getchar();
	return 0;
}