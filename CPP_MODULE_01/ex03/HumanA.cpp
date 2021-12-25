//
// Created by lhawick on 25.08.2021.
//

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
		<< std::endl;
}