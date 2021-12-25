//
// Created by lhawick on 26.08.2021.
//

#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
		return 1;
	}

	Karen karen(argv[1]);

//	karen.complain("WARNING");
	karen.complain("ERROR");
//	karen.complain("INFO");
	karen.complain("DEBUG");
	return (0);
}