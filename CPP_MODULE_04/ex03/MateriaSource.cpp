//
// Created by lhawick on 23.09.2021.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_STORE_SIZE; i++)
		store[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
	for (int i = 0; i < MAX_STORE_SIZE; i++)
	{
		if (other.store[i])
			store[i] = other.store[i]->clone();
		else
			store[i] = 0;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource & other)
{
	for (int i = 0; i < MAX_STORE_SIZE; i++)
	{
		delete store[i];
		if (other.store[i])
			store[i] = other.store[i]->clone();
		else
			store[i] = 0;
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria * m)
{
	for (int i = 0; i < MAX_STORE_SIZE; i++)
	{
		if (store[i] == 0 && m)
		{
			store[i] = m->clone();
			break ;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_STORE_SIZE; i++)
		if (store[i] && store[i]->getType() == type)
			return store[i]->clone();

	std::cout << "MateriaSource unknow type " << type << std::endl;
	return 0;
}