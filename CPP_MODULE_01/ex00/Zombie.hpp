//
// Created by lhawick on 24.08.2021.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		void announce(void);
		~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif //ZOMBIE_HPP
