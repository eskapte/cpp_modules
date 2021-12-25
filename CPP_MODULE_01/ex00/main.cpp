//
// Created by lhawick on 24.08.2021.
//
#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("John");
	randomChump("Gektor");
	zombie->announce();
	delete zombie;

	return (0);
}