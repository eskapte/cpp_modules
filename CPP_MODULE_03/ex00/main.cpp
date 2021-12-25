//
// Created by lhawick on 07.09.2021.
//

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap ct1("Vasya");
	ClapTrap ct2("Ira");

	ct1.attack("Petya");
	ct2.takeDamage(3);
	ct2.attack("Vasya");
	ct1.takeDamage(15);
	ct2.beRepaired(3);

	return 0;
}