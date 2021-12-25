//
// Created by lhawick on 07.09.2021.
//
#pragma once
#ifndef MODULE03_CLAPTRAP_HPP
#define MODULE03_CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:

		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;

	public:

		ClapTrap(const std::string name);
		~ClapTrap();

		virtual void	attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};


#endif //MODULE03_CLAPTRAP_HPP
