//
// Created by lhawick on 25.08.2021.
//
#include <iostream>
#include <string>
#include <fstream>

std::string str_replace(const std::string oldText, const std::string s1,
					  const std::string s2)
{
	size_t 	pos;
	std::string copy = oldText;

	pos = copy.find(s1);
	while (pos != std::string::npos && s1 != s2)
	{
		copy = copy.substr(0, pos) + s2 + copy.substr(pos + s1.size());
		pos = copy.find(s1);
	}

	return copy;
}

bool	replace(char *fileToOpen, std::ofstream &filename, std::string s1,
			 std::string s2)
{
	std::ifstream	file;
	std::string		buffer;

	file.open(fileToOpen);

	if (!file.is_open())
	{
		std::cerr << "Can't open file " << fileToOpen << std::endl;
		return false;
	}

	while ( !file.eof() )
		buffer += file.get();

	file.close();

	buffer.resize(buffer.size() - 1);

	filename << str_replace(buffer, s1, s2);

	return true;
}

int main(int argc, char **argv)
{
	std::string 	s1, s2, temp;
	std::ofstream	filename;

	setlocale(LC_ALL, "rus");

	if (argc != 4)
	{
		std::cerr << "Error: invalid count of arguments" << std::endl;
		return 1;
	}

	s1 = argv[2];
	s2 = argv[3];

	if (s1.find_first_not_of(' ') == std::string::npos)
	{
		std::cerr << "Error: the first string is empty" << std::endl;
		return 1;
	}

	if (s2.find_first_not_of(' ') == std::string::npos)
	{
		std::cerr << "Error: the second string is empty" << std::endl;
		return 1;
	}

	filename.open("FILENAME.replace");

	if (!filename.is_open())
	{
		std::cerr << "Error: can't create or open FILENAME.replace" << std::endl;
		return 1;
	}

	if (!replace(argv[1], filename, s1, s2))
		return 1;

	filename.close();

	return (0);
}
