#include <iostream>
#include <string>
#include <cctype>

void trim(std::string &str)
{
	unsigned long	i = 0;

	while (std::isspace(str[i]) && i < str.length())
		str.erase(i, 1);
	while (!std::isspace(str[i]) && i < str.length())
		i++;
	while (std::isspace(str[i]) && i < str.length())
		str.erase(i, 1);
}

int main(int argc, char *argv[])
{
	std::string str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			trim(str);
			for (int j = 0; j < (int) str.size(); j++)
			{
				if (str[j] != '"')
					std::cout << (char) toupper(str[j]);
			}
			if (i != argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
