//
// Created by lhawick on 26.08.2021.
//

#include "Karen.hpp"

Karen::Karen(std::string filter)
{
	fPTR[0] = &Karen::debug;
	fPTR[1] = &Karen::info;
	fPTR[2] = &Karen::warning;
	fPTR[3] = &Karen::error;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	filterLevel = 10;
	for (size_t i = 0; i < 4; i++)
	{
		if (levels[i] == filter)
			filterLevel = i;
	}

	if (filterLevel == 10)
		std::cout << "[ Probably complaining about insignificant problems ]"
				  << std::endl;
}

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
	return 0 + (level == "DEBUG") * 1 +
				(level == "INFO") * 2 +
				(level == "WARNING") * 3 +
				(level == "ERROR") * 4;
}

void Karen::complain(std::string level)
{
	int lvl = getNum(level);

	lvl = lvl * (lvl - 1 >= filterLevel);

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