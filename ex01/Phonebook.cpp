#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->_index = 0;
	std::cout << "Constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Phonebook::setContact(void)
{
	std::string str;

	// index % 8 garanties the array to stay at 8 if it goes over it, index starts over
	if (this->_index > 7)
		std::cout << "You are overwriting the contact: " << this->_contact[this->_index % 8].getFirstName() << std::endl;

	std::cin << "Enter First name";

}