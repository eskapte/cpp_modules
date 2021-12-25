//
// Created by lhawick on 09.09.2021.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints		= 100;
	_energyPoints	= 100;
	_attackDamage	= 30;

	std::cout << "A FragTrap " << _name << " is created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "A FragTrap " << _name << " is destroyed" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	if (_energyPoints-- > 0)
		std::cout << "FragTrap " << _name << " attack " << target << ", "
																	 "causing "
				  << _attackDamage << " points of damage" << std::endl;
	else
		std::cout << "FragTrap " << _name << " tried to attack, but it hasn't"
				  << " energy :(" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " called highFivesGuys" << std::endl;
}