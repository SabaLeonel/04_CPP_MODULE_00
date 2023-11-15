#include "Main.hpp"

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

void phonebook::getContact(int index) {
	this->_contacts[index].getContact();
}


void phonebook::setContact(int index, std::string firstName, std::string lastName, std::string nickname, std::string number,
						   std::string darkestSecret) {
	this->_contacts[index].setContact(firstName, lastName, nickname, number, darkestSecret);
}


std::string	phonebook::getFirstName(int index)
{
	return this->_contacts[index].getFirstName();
}

std::string	phonebook::getLastName(int index)
{
	return this->_contacts[index].getLastName();
}

std::string	phonebook::getNickname(int index)
{
	return this->_contacts[index].getNickname();
}

std::string	phonebook::getNumber(int index)
{
	return this->_contacts[index].getNumber();
}

std::string	phonebook::getDarkestSecret(int index)
{
	return this->_contacts[index].getDarkestSecret();
}


