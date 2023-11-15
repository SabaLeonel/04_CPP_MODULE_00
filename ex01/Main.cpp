#include "PhoneBook.hpp"




int main(void)
{
	phonebook phonebook;
	int i;
	std::string command;

	while (1)
	{
		std::cout << "Enter a command ADD | SEARCH | EXIT : ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
		{
			i %= 8;
			phonebook.setContact(i);
			i ++;
		}
		else if (command == "SEARCH")
			phonebook.searchContact();
		else
			std::cout << "usage: [ADD][SEARCH][EXIT]." << std::endl;
	}
	return (0);
}