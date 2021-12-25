//
// Created by lhawick on 13.09.2021.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "A WrongAnimal class is created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A WrongAnimal class is destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "A WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}