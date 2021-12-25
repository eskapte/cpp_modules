//
// Created by lhawick on 25.08.2021.
//

#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
{
	this->_name = name;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
			  << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}