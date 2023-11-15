#include "Main.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::setContact(std::string firstName, std::string lastName, std::string nickname, std::string number, std::string darkestSecret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_number = number;
	this->_darkestSecret = darkestSecret;
}

void Contact::getContact() const {
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Number: " << this->_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}

std::string Contact::getDarkestSecret() const {
	return this->_darkestSecret;
}

std::string Contact::getFirstName()const {
	return this->_firstName;
}

std::string Contact::getLastName() const{
	return this->_lastName;
}

std::string Contact::getNickname() const{
	return this->_nickname;
}

std::string Contact::getNumber() const{
	return this->_number;
}