#ifndef CONTACT_H
# define CONTACT_H

#include <iostream> // To use cout
#include <cctype>	// To use toupper()
# include <string>
# include <sstream>
# include <cstdlib> // To use exit()
# include <cstdio>
#include <cstring> 

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
		std::string first_name_getter() const;
		std::string last_name_getter() const;
		std::string nickname_name_getter() const;
		std::string phone_getter() const;
		std::string secret_getter() const;
};
#endif