#include "Zombie.hpp"

int main()
{
	Zombie zombieInStack("stack");
	zombieInStack.annouce();
	Zombie *zombieInHeap = newZombie("heap");
	zombieInHeap->annouce();
	randomChump("randi");
	delete zombieInHeap;
	return (0);
}
