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
	std::string getFirstName(void) const;
	void setFirstName(std::string str);

	std::string getLastName(void) const;
	void setLastName(std::string str);

	std::string getNickName(void) const;
	void setNickName(std::string str);

	std::string getNumber(void) const;
	void setNumber(std::string str);

	std::string getSecret(void) const;
	void setSecret(std::string str);
	bool getIsEmpty(void) const;
	void setIsEmpty(bool isEmpty);
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _number;
	std::string _secret;
	bool		_isEmpty;
};


#endif
