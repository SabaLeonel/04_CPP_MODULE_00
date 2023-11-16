#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
public:
	//constructor
	Contact(void);
	//destructor
	~Contact(void);
	//getters
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getNumber(void) const;
	std::string getDarkestSecret(void) const;
	//setters
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickName(std::string str);
	void setNumber(std::string str);
	void setDarkestSecret(std::string str);
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _number;
	std::string _darkestSecret;
};


#endif
