//
// Created by lhawick on 24.08.2021.
//

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "simple zombie";
}

Zombie& Zombie::operator=(std::string name)
{
	this->name = name;
	return *this;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is died :(" << std::endl;
}