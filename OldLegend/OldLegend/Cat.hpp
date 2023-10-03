#pragma once
#include "Animal.hpp"

namespace Animals
{
	class Cat : public Animals::Animal
	{
	public:
		Cat(int legsNumber);
		int getLegsNumber();
		void talk();

	private:
		int legsNumber;
	};
}