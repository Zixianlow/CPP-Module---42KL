#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
private:
	int			Index;
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:
	Contact();
	~Contact();
	void		getIndex(int i);
	std::string	requestInput(std::string s);
	void		init(void);
	std::string	printName(std::string s);
	void		view(void);
	void		info(void);
};

#endif
