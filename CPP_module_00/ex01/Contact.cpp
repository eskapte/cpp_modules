#include "phoneBook.h"

namespace pb
{
	Contact::Contact()
	{

	}

	Contact::Contact(std::string firstName, std::string secondName,
				  		std::string nickname, std::string secret,
				  		std::string phoneNumber)
	{
		this->firstName = firstName;
		this->secondName = secondName;
		this->nickname = nickname;
		this->secret = secret;
		this->phoneNumber = phoneNumber;
	}

	std::string Contact::FirstName()
	{
		return this->firstName;
	}

	std::string Contact::SecondName()
	{
		return this->secondName;
	}

	std::string Contact::Nickname()
	{
		return this->nickname;
	}

	std::string Contact::Secret()
	{
		return this->secret;
	}

	std::string Contact::PhoneNumber()
	{
		return this->phoneNumber;
	}
}