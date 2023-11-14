#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Main.hpp"

class Contact {
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _number;
	std::string _darkestSecret;

public:
	Contact(void);
	~Contact(void);
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getNumber(void) const;
	std::string getDarkestSecret(void) const;
	void getContact(void) const;
	void setContact(std::string firstName, std::string lastName, std::string nickname, std::string number, std::string darkestSecret);
};


#endif
