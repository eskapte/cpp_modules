//
// Created by lhawick on 20.09.2021.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {};

Cure::Cure(const Cure & other) : AMateria(other.type) {};

AMateria * Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}