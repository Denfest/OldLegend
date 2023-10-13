#pragma once

using namespace std;

namespace Animals
{
	class Animal
	{
	
	public:
		virtual void talk() = 0;
		virtual void eat() = 0;
		int getAge();
		string getName();
	protected:
		int age;
		string name;
	};
}