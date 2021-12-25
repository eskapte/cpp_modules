//
// Created by lhawick on 13.09.2021.
//

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "A Cat class is created" << std::endl;
}

Cat::Cat(Cat &other)
{
	Brain * otherBrain = other.getBrain();

	this->type = "Cat";
	if (otherBrain)
	{
		this->brain = new Brain(*otherBrain);
	}
	std::cout << "A Cat was copied" << std::endl;
}

Cat & Cat::operator=(Cat &other)
{
	if (&other == this)
		return *this;

	delete this->brain;
	this->brain = new Brain(*other.getBrain());

	return *this;
}

Brain * Cat::getBrain()
{
	if (this->brain)
		return this->brain;
	return 0;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A Cat class is destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << " Myaaaaauauuuuuuuuuu" << std::endl;
}