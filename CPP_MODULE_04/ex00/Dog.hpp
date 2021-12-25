//
// Created by lhawick on 13.09.2021.
//
#pragma once
#ifndef MODULE04_DOG_HPP
#define MODULE04_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();

		virtual void makeSound() const;
};


#endif //MODULE04_DOG_HPP
