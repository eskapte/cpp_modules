//
// Created by lhawick on 20.09.2021.
//
#pragma once
#ifndef MODULE04_CHARACTER_HPP
#define MODULE04_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	static const int MAX_INV_SIZE = 4;

	private:
		std::string name;
		AMateria *	inventory[MAX_INV_SIZE];

	public:
		Character(std::string const name);
		Character(const Character & other);
		~Character();

		Character & operator=(const Character & other);

		virtual std::string const & getName() const;
		virtual void				equip(AMateria * m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter & target);
};


#endif //MODULE04_CHARACTER_HPP
