//
// Created by lhawick on 08.09.2021.
//
#pragma once
#ifndef MODULE03_SCAVTRAP_HPP
#define MODULE03_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();

		void	attack(std::string const &target);
		void	guardGate(void);
};


#endif //MODULE03_SCAVTRAP_HPP
