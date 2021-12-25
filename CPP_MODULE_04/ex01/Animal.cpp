//
// Created by lhawick on 13.09.2021.
//

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "no type";
	std::cout << "A Animal class is created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "A Animal class is destroyed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal without type can't make sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}