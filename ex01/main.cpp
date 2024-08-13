#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	delete dog; // should not create a leak
	delete cat;

	Animal *animals[4];
	for (int i = 0; i < 2; i++)
	{
		animals[i] = new Dog();
		animals[i + 2] = new Cat();
	}

	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
	}

	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}

	return 0;
}
