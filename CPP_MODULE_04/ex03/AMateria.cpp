//
// Created by lhawick on 20.09.2021.
//

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria & AMateria::operator=(AMateria const & other)
{
	if (this == &other)
		return *this;
	this->type = other.type;

	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter & target)
{
	std::cout << "use " << this->type << " for " << target.getName() <<
	std::endl;
}