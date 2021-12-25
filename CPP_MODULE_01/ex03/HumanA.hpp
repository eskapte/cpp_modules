//
// Created by lhawick on 25.08.2021.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
					HumanA(const std::string name, Weapon &weapon);
		void		attack(void);
};

#endif // HUMANA_HPP
