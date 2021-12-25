//
// Created by lhawick on 12.09.2021.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "__clap__name"),
												FragTrap(name), ScavTrap(name)
{
	_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << "A DiamondTrap " << _name << " is created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "A DiamondTrap " << _name << " is destroyed" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << _name << ". The ClapTrap name is "
		<< ClapTrap::_name << std::endl;
}