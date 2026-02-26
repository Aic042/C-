#ifndef CONTACT_H
# define CONTACT_H

#include <iostream> // To use cout
#include <cctype>	// To use toupper()
# include <string>
# include <sstream>
# include <cstdlib> // To use exit()
# include <cstdio>

class Contact {
	private:
		std::string	index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string secret;
		
	public:
		void setContact();
		void display();
		void display_long();
};
#endif