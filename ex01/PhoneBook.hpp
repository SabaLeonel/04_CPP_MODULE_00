
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class phonebook {
public:
	phonebook(void);
	~phonebook(void);
	void setContact(int i);
	void searchContact(void);
	void printContact(int i) const;
	void printAllContact(void) const;

private:
	int _index;
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _number;
	std::string _darkestSecret;
};




#endif
