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
		if (!std::getline(std::cin, str) || str == "EXIT" || std::cin.eof())
				exit(1) ;
		else if (str == "ADD")
			phonebook.setContact();
		else if (str == "SEARCH")
		{
			phonebook.Display();
			phonebook.getContact();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			std::cout << "usage: [ADD][SEARCH][EXIT]." << std::endl;
	}
	return (0);
}

