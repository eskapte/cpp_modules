//
// Created by lhawick on 13.09.2021.
//

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "A Dog class is created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A Dog class is destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << " Gaf gaf gaf" << std::endl;
}