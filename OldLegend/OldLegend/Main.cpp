#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

using namespace Animals;


int main()
{
	int g;
	Cat a(12, "Hyilusha");
	a.eat();
	a.sleep();
	a.talk();
	cout << a.getAge() << endl;
	cout << a.getName() << endl;
	Dog b(10, "Pidor");
	b.eat();
	b.play();
	b.talk();
	cout << b.getAge() << endl;
	cout << b.getName() << endl;
	cin >> g;
	return 0;
}