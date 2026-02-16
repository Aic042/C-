#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream> // To use cout
#include <cctype>	// To use toupper()
# include <string>
# include <iostream>
# include <sstream>
# include <cstdlib> // To use exit()

# define BOLD_ON "\033[1m"
# define BOLD_OFF "\033[0m"

class Contact {
private:
	std::string	index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string secret;
	
public:
	void setContact();
	void display();
	void display_long();
};

#endif