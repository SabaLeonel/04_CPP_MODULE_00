#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>


class Phonebook {
public:
	// Constructor
	Phonebook(void);
	// Destructor
	~Phonebook(void);
	//set a contact
	void setContact();
	// gets a contact
	void getContact(void);
	void Display(void);
private:
	// Array of contacts
	Contact _contact[8];
	int 	_index;
};


#endif
