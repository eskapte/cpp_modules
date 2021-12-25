#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "phoneBook.h"

namespace pb
{
	class PhoneBook
	{
		static const unsigned short MAX_SIZE = 8;
		private:
			Contact	contacts[MAX_SIZE];
			unsigned short	contactsSize;
			unsigned short	oldestContact;
			void            displayContacts();
		public:
			PhoneBook();
			void addContact(std::string firstName, std::string secondName,
				   std::string nickname, std::string secret,
				   std::string phoneNumber);
			void searchContact();
	};
}

#endif