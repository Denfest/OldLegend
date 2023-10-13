#include <iostream>
#include "Dog.hpp"

using namespace Animals;

Dog::Dog(int age, string name)
{
	this->age = age;
	this->name = name;
}
void Dog::talk()
{
	std::cout << "I am dog, woof woof" << std::endl;
}
void Dog::play()
{
	std::cout << "*sounds of plaing* " << std::endl;
}
void Dog::eat()
{
	std::cout << "Omnomonomnom" << std::endl;
}