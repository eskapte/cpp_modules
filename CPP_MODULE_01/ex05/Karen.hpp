//
// Created by lhawick on 26.08.2021.
//

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>
#include <algorithm>

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		int		getNum(std::string level);
	public:
		void	complain(std::string level);
};

#endif // KAREN_HPP
