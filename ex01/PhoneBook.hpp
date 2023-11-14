
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Main.hpp"

class phonebook {
public:
	phonebook(void);
	~phonebook(void);
	void setContact(int index, std::string firstName, std::string lastName, std::string nickname, std::string number, std::string darkestSecret);
	void searchContact();
	Contact getContact(int index);
	std::string getFirstName(int index);
	std::string getLastName(int index);
	std::string getNickname(int index);
	std::string getNumber(int index);
	std::string getDarkestSecret(int index);

private:
	Contact _contacts[8];
	int _index;
};

#endif
