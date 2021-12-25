//
// Created by lhawick on 24.08.2021.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}