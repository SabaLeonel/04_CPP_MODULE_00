#include "Contact.hpp"

Contact::Contact(void) {
	_isEmpty = true;
	return ;
}

Contact::~Contact(void) {
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

std::string Contact::getNickName(void) const
{
	return (this->_nickname);
}

std::string Contact::getSecret() const {
	return (this->_secret);
}

std::string Contact::getNumber() const
{
	return (this->_number);
}

void	Contact::setFirstName(std::string str) {
	this->_firstName = str;
}

void	Contact::setLastName(std::string str)
{
	this->_lastName = str;
}

void	Contact::setNickName(std::string str)
{
	this->_nickname = str;
}

void	Contact::setNumber(std::string str)
{
	this->_number = str;
}

void	Contact::setSecret(std::string str) {
	this->_secret = str;
}

void	Contact::setIsEmpty(bool isEmpty)
{
	this->_isEmpty = isEmpty;
}


bool Contact::getIsEmpty(void) const
{
	return (this->_isEmpty);
}
