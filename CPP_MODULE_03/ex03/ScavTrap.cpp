//
// Created by lhawick on 08.09.2021.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints		= 100;
	_energyPoints	= 50;
	_attackDamage	= 20;

	std::cout << "A ScavTrap " << _name << " is created" << std::endl;
};

ScavTrap::~ScavTrap()
{
	std::cout << "A ScavTrap " << _name << " is destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints-- > 0)
		std::cout << "ScavTrap " << _name << " attack " << target
		<< ", causing " << _attackDamage << " points of damage" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " tried to attack, but it hasn't"
				  << " energy :(" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is entered in Gate keeper mode" <<
		std::endl;
}