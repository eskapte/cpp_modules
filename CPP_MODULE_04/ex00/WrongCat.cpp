//
// Created by lhawick on 13.09.2021.
//

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "A WrongCat class is created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat class is destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "A WrongCat sound" << std::endl;
}