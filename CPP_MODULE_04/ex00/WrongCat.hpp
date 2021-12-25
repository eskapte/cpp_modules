//
// Created by lhawick on 13.09.2021.
//
#pragma once
#ifndef MODULE04_WRONGCAT_HPP
#define MODULE04_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();

		void makeSound() const;
};


#endif //MODULE04_WRONGCAT_HPP
