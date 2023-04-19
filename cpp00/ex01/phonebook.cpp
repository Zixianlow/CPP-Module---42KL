#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::init()
{
	std::cout << "How to use this phonebook" << std::endl;
}

void Phonebook::view()
{
	std::cout << "View this phonebook" << std::endl;
}

void Phonebook::add()
{
	static int	i;
	// contact init
	// contact index
	std::cout << "ADD" << std::endl;
	i++;
}

void Phonebook::search()
{
	// int	i;

	// put index 
	std::cout << "SEARCH" << std::endl;
}
