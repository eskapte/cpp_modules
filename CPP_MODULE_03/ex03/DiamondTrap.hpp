//
// Created by lhawick on 12.09.2021.
//
#pragma once
#ifndef MODULE03_DIAMONDTRAP_HPP
#define MODULE03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();

		void attack(std::string const &target);
		void whoAmI(void);
};


#endif //MODULE03_DIAMONDTRAP_HPP
