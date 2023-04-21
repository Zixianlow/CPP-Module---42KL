#include <iostream>
#include <string>
#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
	Phonebook Pbook;
	std::string input = "";
	
	Pbook.init();
	while (input.compare("EXIT"))
	{
		if (!input.compare("ADD"))
			Pbook.add();
		else if (!input.compare("SEARCH"))
		{
			Pbook.print();
			Pbook.search();
		}
		std::cout << ">";
		std::cin >> input;
	}
	return (0);
}
