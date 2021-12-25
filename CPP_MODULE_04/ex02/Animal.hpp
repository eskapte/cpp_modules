//
// Created by lhawick on 13.09.2021.
//
#pragma once
#ifndef MODULE04_ANIMAL_HPP
#define MODULE04_ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();

		virtual void		makeSound() const = 0;
		virtual std::string	getType() const = 0;
};


#endif //MODULE04_ANIMAL_HPP
