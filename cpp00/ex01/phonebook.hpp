#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook{
private:
	Contact contact[8];
	// int		index;
public:
	Phonebook();
	~Phonebook();
	void 	init(void);
	void 	view(void);
	void	add(void);
	void 	search(void);
};

#endif
