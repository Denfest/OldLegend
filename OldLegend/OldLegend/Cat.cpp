#include <iostream>
#include "Cat.hpp"

using namespace Animals;

Cat::Cat(int age, string name)
{
	this->age = age;
	this->name = name;
}
void Cat::talk()
{
	std::cout << "I am cat, meow meow" << std::endl;
}
void Cat::eat()
{
	std::cout << "Hom nom nom " << std::endl;
}
void Cat::sleep()
{
	std::cout << "Zzzzzzz" << std::endl;
}