#pragma once
#include "Animal.hpp"

namespace Animals
{
	class Cat : public Animal
	{
	public:
		Cat(int age, string name);
		void talk();
		void eat();
		void sleep();	
	};
}