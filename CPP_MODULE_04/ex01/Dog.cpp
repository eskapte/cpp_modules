//
// Created by lhawick on 13.09.2021.
//

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "A Dog class is created" << std::endl;
}

Dog::Dog(Dog &other)
{
	Brain * otherBrain = other.getBrain();

	this->type = "Dog";
	if (otherBrain)
		this->brain = new Brain(*otherBrain);
	std::cout << "A Dog was copied" << std::endl;
}

Dog & Dog::operator=(Dog &other)
{
	if (&other == this)
		return *this;

	delete this->brain;
	this->brain = new Brain(*other.getBrain());

	return *this;
}

Brain * Dog::getBrain()
{
	if (this->brain)
		return this->brain;
	return 0;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A Dog class is destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << " Gaf gaf gaf" << std::endl;
}