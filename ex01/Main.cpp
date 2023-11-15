#include "Main.hpp"

int main (void)
{
	phonebook	phonebook;
	int			i;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command ADD | SEARCH | EXIT : ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			return (0);
		else if (command == "ADD"){
			if (i >= 8)
				std::cout << "Phonebook is full." << std::endl;
			else
			{
				i ++;
				phonebook.setContact();
			}
		}
		else if (command == "SEARCH")
			phonebook.searchContact();
		else
			std::cout << "usage: [ADD][SEARCH][EXIT] ." << std::endl;
	}
	return (0);
}