//
// Created by lhawick on 13.09.2021.
//
#pragma once
#ifndef MODULE04_DOG_HPP
#define MODULE04_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain * brain;
	public:
		Dog();
		Dog(Dog &other);
		~Dog();

		Dog & operator=(Dog &other);

		virtual void 		makeSound() const;
		virtual std::string getType() const;
		Brain * 			getBrain();
};


#endif //MODULE04_DOG_HPP
