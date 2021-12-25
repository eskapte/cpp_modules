//
// Created by lhawick on 13.09.2021.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	const int animalsSize = 6;
	Animal *  animals[animalsSize];

	for (int i = 0; i < animalsSize; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << animals[1]->getType() << std::endl;

	Cat	* copiedCat = new Cat(*(static_cast<Cat*>(animals[2])));

	for (int i = 0; i < animalsSize; i++)
		delete animals[i];

	copiedCat->getBrain()->printIdeas();

	std::cout << copiedCat->getType() << " " << std::endl;

	Animal * anim = copiedCat;

	delete anim;
}