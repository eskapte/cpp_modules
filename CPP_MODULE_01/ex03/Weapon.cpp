//
// Created by lhawick on 25.08.2021.
//

#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
	this->_type = type;
}

const std::string &Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(const std::string newType)
{
	this->_type = newType;
}