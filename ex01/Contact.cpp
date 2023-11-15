#include "Contact.hpp"

// Constructor
Contact::Contact(void)
{
	return ;
}

// Destructor
Contact::~Contact(void)
{
	return ;
}

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string Contact::getNumber(void) const
{
	return (this->_number);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}