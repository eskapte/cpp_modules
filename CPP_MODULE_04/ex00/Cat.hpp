//
// Created by lhawick on 13.09.2021.
//
#pragma once
#ifndef MODULE04_CAT_HPP
#define MODULE04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();

		virtual void makeSound() const;
};


#endif //MODULE04_CAT_HPP
