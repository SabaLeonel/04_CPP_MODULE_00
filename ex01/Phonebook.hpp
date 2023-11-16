#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {
public:
	// Constructor
	Phonebook(void);
	// Destructor
	~Phonebook(void);
	//set a contact
	void setContact();
	void printContact(Contact contactlist);
	// gets a contact
	Contact getContact(int index);

private:
	// Array of contacts
	Contact _contact[8];
	int 	_index;
};


#endif
