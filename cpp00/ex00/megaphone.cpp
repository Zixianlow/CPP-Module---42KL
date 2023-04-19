#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int		i;
	int		j;
	char 	ch;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			ch = toupper(av[i][j]);
			std::cout << ch;
			j++;
		}
		i++;
	}
	std::cout  << std::endl;
	return (0);
}
