//
// Created by lhawick on 23.09.2021.
//
#pragma once
#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	static const int	MAX_STORE_SIZE = 4;
	private:
		AMateria *		store[MAX_STORE_SIZE];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource & other);
		virtual ~MateriaSource() {};

		MateriaSource & operator=(const MateriaSource & other);

		virtual void learnMateria(AMateria * m);
		virtual AMateria * createMateria(std::string const & type);
};


#endif //EX03_MATERIASOURCE_HPP
