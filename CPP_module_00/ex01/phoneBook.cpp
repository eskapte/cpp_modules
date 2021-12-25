#include "phoneBook.h"

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

std::string prompt()
{
	std::string command;

	std::cout << "Type ADD for add the new contact" << std::endl;
	std::cout << "Type SEARCH for search contact in the phone book" <<
			  std::endl;
	std::cout << "Type EXIT for exit from the program (all contacts will be "
			  << "lost)" << std::endl;
	std::getline(std::cin, command);
	trim(command);
	return command;
}

void requiredInput(std::string &input, std::string prompt)
{
	trim(input);
	while (input.length() == 0)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
	}
}

void	getNewContact(pb::PhoneBook &phoneBook)
{
	std::string iFirstName, iSecondName, iPhoneNumber, iNickname, iSecret;

	std::system("clear");
	requiredInput(iFirstName, "input first name: ");
	requiredInput(iSecondName, "input second name: ");
	requiredInput(iPhoneNumber, "input phone number: ");
	std::cout << "input nickname: ";
	std::getline(std::cin, iNickname);
	std::cout << "input secret: ";
	std::getline(std::cin, iSecret);

	phoneBook.addContact(iFirstName, iSecondName, iNickname, iSecret,
					  iPhoneNumber);
}

int main()
{
	pb::PhoneBook phonebook;
	std::string command;

	std::system("clear");
	while ((command = prompt()) != "EXIT")
	{
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			getNewContact(phonebook);
		else if (command == "SEARCH")
			phonebook.searchContact();
		else
		{
			std::system("clear");
			std::cout << "Unknown command " << command << std::endl;
		}
	}

	return 0;
}
