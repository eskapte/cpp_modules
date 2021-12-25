//
// Created by lhawick on 14.09.2021.
//
#pragma once
#ifndef MODULE04_BRAIN_HPP
#define MODULE04_BRAIN_HPP

#include "Animal.hpp"
#include <cstdlib>
#include <ctime>

class Brain
{
	private:
		static const int	IDEAS_SIZE = 100;
		std::string			ideas[IDEAS_SIZE];

		std::string			getRandomIdea();
	public:
		Brain();
		Brain(Brain &other);
		~Brain();

		std::string *		getIdeas();
		void				printIdeas();
};


#endif //MODULE04_BRAIN_HPP
