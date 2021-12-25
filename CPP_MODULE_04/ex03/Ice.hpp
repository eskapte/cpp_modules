//
// Created by lhawick on 20.09.2021.
//
#pragma once
#ifndef MODULE04_ICE_HPP
#define MODULE04_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice & other);
		~Ice() {};


		virtual AMateria *	clone() const;
		virtual void		use(ICharacter & target);
};


#endif //MODULE04_ICE_HPP
