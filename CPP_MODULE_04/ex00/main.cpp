//
// Created by lhawick on 13.09.2021.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal * meta = new Animal();
	const Animal * j 	= new Dog();
	const Animal * i    = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "Test a wrongAnimal" << std::endl;
	const WrongAnimal * wrongAnimal = new WrongAnimal();
	const WrongAnimal * wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrongAnimal;
	delete wrongCat;
}