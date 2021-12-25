//
// Created by lhawick on 26.08.2021.
//

#include "Karen.hpp"

void Karen::debug()
{
	std::cout << "Debug level" << std::endl;
}

void Karen::info()
{
	std::cout << "Info level" << std::endl;
}

void Karen::warning()
{
	std::cout << "Warn level" << std::endl;
}

void Karen::error()
{
	std::cout << "Error level" << std::endl;
}

int Karen::getNum(std::string level)
{
	return 0 + (level == "DEBUG") * 1 + (level == "INFO") * 2 +
			(level == "WARNING") * 3 + (level == "ERROR") * 4;
}

void Karen::complain(std::string level)
{
	typedef void (Karen::*function)(void);
	function fPTR[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	int lvl = getNum(level);

	switch (lvl)
	{
		case 1:
			(this->*fPTR[0])();
			break ;
		case 2:
			(this->*fPTR[1])();
			break ;
		case 3:
			(this->*fPTR[2])();
			break;
		case 4:
			(this->*fPTR[3])();
			break ;
	}
}