//
// Created by lhawick on 24.08.2021.
//

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}