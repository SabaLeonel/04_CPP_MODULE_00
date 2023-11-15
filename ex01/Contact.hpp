#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>


class Contact {
public:
	Contact(void);
	~Contact(void);
	void setContact(int i);
	void searchContact(void);
	void printContact(int i) const;
	void printAllContact(void) const;
	int getIndex(void) const;
private:
	void getContact();
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _number;
	std::string _darkestSecret;
};




#endif
