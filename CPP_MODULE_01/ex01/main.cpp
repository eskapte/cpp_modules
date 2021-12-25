//
// Created by lhawick on 24.08.2021.
//
#include "Zombie.hpp"

int main(void)
{
	Zombie *hordeZombie;

	hordeZombie = zombieHorde(10, "Jack");

	for (int i = 0; i < 10; i++)
		hordeZombie[i].announce();

	delete[] hordeZombie;

	return (0);
}