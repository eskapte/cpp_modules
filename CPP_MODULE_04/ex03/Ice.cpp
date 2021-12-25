//
// Created by lhawick on 20.09.2021.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::Ice(const Ice & other): AMateria(other.type) {};

AMateria * Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
		std::endl;
}

