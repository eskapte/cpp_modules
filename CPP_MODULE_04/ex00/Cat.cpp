//
// Created by lhawick on 13.09.2021.
//

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "A Cat class is created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A Cat class is destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << " Myaaaaauauuuuuuuuuu" << std::endl;
}