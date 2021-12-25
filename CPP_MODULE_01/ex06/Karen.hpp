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
	typedef void (Karen::*function)(void);
	private:
		int			filterLevel;
		function	fPTR[4];
		std::string levels[4];
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		int			getNum(std::string level);
	public:
				Karen(std::string filter);
		void	complain(std::string level);
};

#endif // KAREN_HPP
