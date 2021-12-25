//
// Created by lhawick on 20.09.2021.
//
#pragma once
#ifndef MODULE04_AMATERIA_HPP
#define MODULE04_AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria() {};

		AMateria & operator=(const AMateria & other);

		std::string const & getType() const;

		virtual AMateria *	clone() const = 0;
		virtual void		use(ICharacter & target);
};


#endif //MODULE04_AMATERIA_HPP
