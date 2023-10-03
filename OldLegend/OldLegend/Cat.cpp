#include <iostream>
#include "Cat.hpp"

using namespace Animals;

Cat::Cat(int legsNumber)
{
	Cat::legsNumber = legsNumber;
};
int Cat::getLegsNumber()
{
	return Cat::legsNumber;
};
void Cat::talk()
{
	std::cout << "I am cat" << std::endl;
}