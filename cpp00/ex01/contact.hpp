#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact{
private:
	int			Index;
	// std::string FirstName;
	// std::string LastName;
	// std::string Nickname;
	// std::string PhoneNumber;
	// std::string DarkestSecret;
public:
	Contact();
	~Contact();
	void	getIndex(int i);
	void	init(void);
};

#endif
