#include "PhoneBook.hpp"

// Constructor
phonebook::phonebook(void)
{
	return ;
}

// Destructor
phonebook::~phonebook(void)
{
	return ;
}

void phonebook::printContact(int i) const{
	std::cout << std::setw(10) << i << "|";
	if (this->_firstName.length() > 10)
		std::cout << _firstName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _firstName << "|";
	if (_lastName.length() > 10)
		std::cout << _lastName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _lastName << "|";
	if (_nickname.length() > 10)
		std::cout << _nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _nickname << "|";
	std::cout << std::endl;
}

void phonebook::printAllContact (void) const {
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i < _index)
			printContact(i);
		else
			std::cout << std::setw(10) << i << "|" << std::endl;
	}
}

void phonebook::setContact(int i)
{
	std::cout << "Enter your first name: ";
	std::getline(std::cin, this->_firstName);
	std::cout << "Enter your last name: ";
	std::getline(std::cin, this->_lastName);
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Enter your phone number: ";
	std::getline(std::cin, this->_number);
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, this->_darkestSecret);
	this->_index = i;
}


void phonebook::searchContact(void)
{
	std::string index;
	std::cout << "Enter an index: ";
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
	{
		if (index[0] - '0' < _index)
			printContact(index[0] - '0');
		else
			std::cout << "No contact at this index." << std::endl;
	}
	else
		std::cout << "Invalid index." << std::endl;
}
