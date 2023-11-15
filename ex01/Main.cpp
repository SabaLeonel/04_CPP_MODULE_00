#include "PhoneBook.hpp"


void	printAllContact(phonebook phonebook)
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i < phonebook.getIndex())
			phonebook.printContact(i);
		else
			std::cout << std::setw(10) << i << "|" << std::endl;
	}
}

int main(void)
{
	phonebook phonebook;
	int i;
	std::string command;

	i = 0;
	while (1)
	{
		std::cout << "Enter a command ADD | SEARCH | EXIT : ";
		if (std::getline(std::cin, command))
		{
			if (command == "EXIT")
				break ;
			else if (command == "ADD")
			{
				printf("i = %d\n", i);
				i = (i + 1) % 8;
				phonebook.setContact(i);
//				i ++;
			}
			else if (command == "SEARCH")
			{
				printAllContact(phonebook);
				phonebook.searchContact();
			}
			else
				std::cout << "usage: [ADD][SEARCH][EXIT]." << std::endl;
		}
		else
		{
			if (std::cin.eof())
				break ;
		}
	}
	return (0);
}