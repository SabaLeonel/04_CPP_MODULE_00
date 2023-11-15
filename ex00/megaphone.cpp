#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac < 2 || av[1][0] == '\0')
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 0; av[1][i]; i++)
		std::cout << static_cast<char>(std::toupper(av[1][i]));
	std::cout << std::endl;
	return (0);
}