//
// Created by lhawick on 13.09.2021.
//
#pragma once
#ifndef MODULE04_WRONGANIMAL_HPP
#define MODULE04_WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();

		void		makeSound() const;
		std::string getType() const;
};


#endif //MODULE04_WRONGANIMAL_HPP
