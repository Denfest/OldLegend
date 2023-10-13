#pragma once
#include "Animal.hpp"

namespace Animals
{
	class Dog : public Animal
	{
	public:
		Dog(int age, string name);
		void talk();
		void eat();
		void play();
	};
}