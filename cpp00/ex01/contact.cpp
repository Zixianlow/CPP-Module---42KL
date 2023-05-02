#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::getIndex(int i)
{
	this->Index = i % 8;
}

std::string	Contact::requestInput(std::string s)
{
	std::string	input;
	while (1)
	{
		std::cout << s << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			break ;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input. Please try again." << std::endl;
		}
	}
	return (input);
}

void	Contact::init(void)
{
	std::cin.ignore();
	std::cout << std::endl;
	this->FirstName = requestInput("Please enter your first name: ");
	this->LastName = requestInput("Please enter your last name: ");
	this->Nickname = requestInput("Please enter your nickname: ");
	this->PhoneNumber = requestInput("Please enter your phone number: ");
	this->DarkestSecret = requestInput("Please enter your darkest secret: ");
	std::cout << std::endl;
}

std::string	Contact::printName(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

void	Contact::view(void)
{
	if (this->FirstName.empty() || this->LastName.empty() || this->Nickname.empty())
		return ;
	std::cout << "|" << std::setw(10) << this->Index << std::flush;
	std::cout << "|" << std::setw(10) << printName(this->FirstName) << std::flush;
	std::cout << "|" << std::setw(10) << printName(this->LastName) << std::flush;
	std::cout << "|" << std::setw(10) << printName(this->Nickname) << std::flush;
	std::cout << "|" << std::flush;
	std::cout << std::endl;
}

void	Contact::info(void)
{
	if (this->FirstName.empty() || this->LastName.empty() || this->Nickname.empty())
		return ;
	std::cout << "Contact    #" << this->Index <<std::endl;
	std::cout << "First name     :\t" << this->FirstName << std::endl;
	std::cout << "Last name      :\t" << this->LastName << std::endl;
	std::cout << "Nickname       :\t" << this->Nickname << std::endl;
	std::cout << "Phone number   :\t" << this->PhoneNumber << std::endl;
	std::cout << "Darkest secret :\t" << this->DarkestSecret << std::endl;
	std::cout << std::endl;
}
