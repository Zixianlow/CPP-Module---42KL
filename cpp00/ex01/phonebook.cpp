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
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|              PHONEBOOK                    |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|       How to use this phonebook           |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  ADD     : Add a new contact              |" << std::endl;
	std::cout << "|  SEARCH  : Search for a contact           |" << std::endl;
	std::cout << "|  EXIT    : Exit this phonebook            |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void Phonebook::add()
{
	static int	i;
	this->contact[i % 8].getIndex(i);
	this->contact[i % 8].init();
	i++;
}

int	Phonebook::requestIndex(std::string s)
{
	int			index;
	while (1)
	{
		std::cout << s << std::flush;
		std::cin >> index;
		if (std::cin.good() && index >= 0 && index <= 7)
			break ;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Invalid input. Please try again." << std::endl;
		}
	}
	return (index);
}

void Phonebook::search()
{
	int	i;

	i = requestIndex("Input a index for person to view: ");
	std::cout << std::endl;
	this->contact[i].info();
}

void Phonebook::print()
{
	int	i;

	i = 0;
	std::cout << std::endl;
	std::cout << "---------------------------------------------"<< std::endl;
	std::cout << "|           THIS IS YOUR PHONEBOOK          |"<< std::endl;
	std::cout << "---------------------------------------------"<< std::endl;
	std::cout << "|   INDEX  | FIRSTNAME| LASTNAME | NICKNAME |"<< std::endl;
	std::cout << "---------------------------------------------"<< std::endl;
	while (i < 8)
	{
		this->contact[i].view();
		i++;
	}
	std::cout << "---------------------------------------------"<< std::endl;
	std::cout << std::endl;
}
