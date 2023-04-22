#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void	annouce();
	void	setName(std::string name);
	Zombie* zombieHorde(int N, std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
