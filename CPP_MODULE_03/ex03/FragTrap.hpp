//
// Created by lhawick on 09.09.2021.
//

#ifndef MODULE03_FRAGTRAP_HPP
#define MODULE03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};


#endif //MODULE03_FRAGTRAP_HPP
