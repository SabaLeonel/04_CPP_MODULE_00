#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->_index = 0;

	std::cout << "Constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook() {
	std::cout << std::endl;
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Phonebook::setContact(void)
{
	std::string str;

	// index % 8 garanties the array to stay at 8 if it goes over it, index starts over
	if (this->_index > 7)
		std::cout << "You are overwriting the contact: " << this->_contact[this->_index % 8].getFirstName() << std::endl;
	// Set Name
	str = "";
	std::cout << "Enter First Name: ";
	std::getline(std::cin, str);
	while (str == "")
	{
		std::cout << "First Name cannot be empty" << std::endl;
		std::cout << "Enter First Name: ";
		std::getline(std::cin, str);
	}
	this->_contact[this->_index % 8].setFirstName(str);

	str = "";
	std::cout << "Enter a Last Name: ";
	std::getline(std::cin, str);
	while (str == "")
	{
		std::cout << "Last Name cannot be empty" << std::endl;
		std::cout << "Enter a Last Name: ";
		std::getline(std::cin, str);
	}
	this->_contact[this->_index % 8].setLastName(str);

	str = "";
	std::cout << "Enter a Nickname: ";
	std::getline(std::cin, str);
	while (str == "")
	{
		std::cout << "Nickname cannot be empty" << std::endl;
		std::cout << "Enter a Nickname: ";
		std::getline(std::cin, str);
	}
	this->_contact[this->_index % 8].setNickName(str);

	str = "";
	std::cout << "Enter a Number: ";
	std::getline(std::cin, str);
	while (str == "")
	{
		std::cout << "Number cannot be empty" << std::endl;
		std::cout << "Enter a Number: ";
		std::getline(std::cin, str);
	}
	this->_contact[this->_index % 8].setNumber(str);

	str = "";
	std::cout << "Enter a Darkest Secret: ";
	std::getline(std::cin, str);
	while (str == "")
	{
		std::cout << "Darkest Secret cannot be empty" << std::endl;
		std::cout << "Enter a Darkest Secret: ";
		std::getline(std::cin, str);
	}
	this->_contact[this->_index % 8].setSecret(str);
	this->_contact[this->_index % 8].setIsEmpty(false);
	std::cout << std::endl;
	std::cout << "Successully to the phonebook" << std::endl;
	this->_index ++;
}

void	Phonebook::getContact()
{
	int i;

	std::cout << "Enter an index: ";
	std::cin >> i;
	if (i < 0 || i > 7)
		std::cout << "Invalid index" << std::endl;
	else {
		std::cout << "First Name: " << this->_contact[i].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->_contact[i].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contact[i].getNickName() << std::endl;
		std::cout << "Number: " << this->_contact[i].getNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->_contact[i].getSecret() << std::endl;
	}
}

void Phonebook::Display(void){
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->_contact[i].getIsEmpty() == true)
			break ;
		if (this->_contact[i].getFirstName().size() > 10)
			this->_contact[i].setFirstName(this->_contact[i].getFirstName().substr(0, 9) + ".");
		if (this->_contact[i].getLastName().size() > 10)
			this->_contact[i].setLastName(this->_contact[i].getLastName().substr(0, 9) + ".");
		if (this->_contact[i].getNickName().size() > 10)
			this->_contact[i].setNickName(this->_contact[i].getNickName().substr(0, 9) + ".");

		std::cout << std::setw(10) << i << "|"
			<< std::setw(10) << this->_contact[i].getFirstName() << "|"
			<< std::setw(10) << this->_contact[i].getLastName() << "|"
			<< std::setw(10) << this->_contact[i].getNickName() << std::endl;
	}
	return ;
}
