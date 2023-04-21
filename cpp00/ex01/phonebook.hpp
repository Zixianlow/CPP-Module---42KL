#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook{
private:
	Contact contact[8];
public:
	Phonebook();
	~Phonebook();
	void 	init(void);
	void	add(void);
	int 	requestIndex(std::string s);
	void 	search(void);
	void 	print(void);
};

#endif
