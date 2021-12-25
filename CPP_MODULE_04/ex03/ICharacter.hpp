//
// Created by lhawick on 20.09.2021.
//
#pragma once
#ifndef MODULE04_ICHARACTER_HPP
#define MODULE04_ICHARACTER_HPP

class AMateria;

#include <string>

class ICharacter
{
	public:
		virtual ~ICharacter() {};

		virtual std::string const & getName() const = 0;
		virtual void				equip(AMateria * m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter & target) = 0;
};


#endif //MODULE04_ICHARACTER_HPP
