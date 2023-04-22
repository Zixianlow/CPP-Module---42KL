#include "Zombie.hpp"

int main()
{
	Zombie *zomboe = zombieHorde(5, "haha");
	int i = 0;
	while (i < 5)
	{
		zomboe[i].annouce();
		i++;
	}
	delete []zomboe;
	return (0);
}
