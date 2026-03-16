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
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string secret;
		
	public:
		void setContact();
		void display();
		void display_long();
		std::string first_name_getter(std::string string);
		std::string last_name_getter(std::string string);
		std::string nickname_name_getter(std::string string);
		std::string phone_getter(std::string string);
		std::string secret_getter(std::string string);
};
#endif