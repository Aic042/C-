#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream> // To use cout
#include <cctype>	// To use toupper()
# include <string>
# include <iostream>
# include <sstream>
# include <cstdlib> // To use exit()
# include <cstdio>

# define BOLD_ON "\033[1m"
# define BOLD_OFF "\033[0m"

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

class Phonebook
{
	private:
		Contact contacts[8];
		int		index;
		int		number_of_contacts;
	public:
		void	add(void);
		void	search(void);
		void	print(Contact contact);
};

#endif