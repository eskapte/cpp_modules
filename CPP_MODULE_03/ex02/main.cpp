//
// Created by lhawick on 07.09.2021.
//

#include "FragTrap.hpp"

int		main(void)
{
	ClapTrap ct1("Vasya");
	FragTrap ct2("Ira");

	ct1.attack("Petya");
	ct2.takeDamage(3);
	ct2.attack("Vasya");
	ct1.takeDamage(15);
	ct2.beRepaired(3);

	ct2.highFivesGuys();

	return 0;
}