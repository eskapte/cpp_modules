//
// Created by lhawick on 20.09.2021.
//
#pragma once
#ifndef MODULE04_CURE_HPP
#define MODULE04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	Cure(const Cure & other);
	~Cure() {};

	virtual AMateria *	clone() const;
	virtual void		use(ICharacter & target);
};


#endif //MODULE04_CURE_HPP
