#include <iostream>

#define ARG_ERR "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int ac, char **av)
{
	if (ac < 2)
		return (std::cout << ARG_ERR << std::endl, 1);
	for (int i = 1; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
			std::cout << static_cast <char> (toupper(av[i][j]));
	}
	std::cout << "\n";
	return (0);
}

