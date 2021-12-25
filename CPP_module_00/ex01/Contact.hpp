#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "phoneBook.h"

namespace pb
{
	class Contact
	{
		private:
			std::string firstName;
			std::string secondName;
			std::string phoneNumber;
			std::string nickname;
			std::string secret;
		public:
			Contact();
			Contact(std::string name, std::string secondName, std::string nickname,
						std::string secret, std::string phoneNumber);
			std::string FirstName();
			std::string SecondName();
			std::string Nickname();
			std::string Secret();
			std::string PhoneNumber();
	};
}

#endif
