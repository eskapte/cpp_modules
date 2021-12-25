//
// Created by lhawick on 13.09.2021.
//
#pragma once
#ifndef MODULE04_ANIMAL_HPP
#define MODULE04_ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();

		virtual void		makeSound() const;
		virtual std::string	getType() const;
};


#endif //MODULE04_ANIMAL_HPP
