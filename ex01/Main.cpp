#include "Phonebook.hpp"

int main(void)
{
	Phonebook phonebook;
	int i;
	std::string str;

	i = 0;
	while (1)
	{
		std::cout << "Enter a command ADD | SEARCH | EXIT : ";
		if (std::getline(std::cin, str))
		{
			if (str == "EXIT")
				break ;
			else if (str == "ADD")
				phonebook.setContact();
			else if (str == "SEARCH")
				phonebook.getContact();
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