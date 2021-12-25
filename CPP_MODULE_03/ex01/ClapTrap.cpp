//
// Created by lhawick on 07.09.2021.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name)
{
	_name 			= name;
	_hitpoints		= 10;
	_energyPoints	= 10;
	_attackDamage	= 0;

	std::cout << "A ClapTrap " << _name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "A ClapTrap " << _name << " is destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints-- > 0)
		std::cout << "ClapTrap " << _name << " attack " << target << ", "
															   "causing "
				<< _attackDamage << " points of damage" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " tried to attack, but it hasn't"
									   << " energy :(" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoints -= amount;

	std::cout << "ClapTrap " << _name << " take " << amount << " damage. ";

	if (_hitpoints > 0)
		 std::cout << "Hitpoint left " << _hitpoints << std::endl;
	else
		std::cout << "It was fatal :(" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitpoints += amount;

	std::cout << "ClapTrap " << _name << " was repaired by " << amount
				<< " points. Total HP: " << _hitpoints << std::endl;
}