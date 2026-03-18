#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream> // To use cout
#include <cctype>	// To use toupper()
# include <string>
# include <sstream>
# include <cstdlib> // To use exit()
# include <cstdio>
# include <iomanip>
# include "Contact.hpp"

# define BOLD_ON "\033[1m"
# define BOLD_OFF "\033[0m"


class Phonebook
{
	private:
		Contact contacts[8];
		int		index;
		int		number_of_contacts;
	public:
		void	add(void);
		void	search(void);
		void	print();
		int	contact_counter() const
		{
			return(number_of_contacts);
		}
		void Contacts_tester();
		
		Phonebook()
		{
			index = 0;
			number_of_contacts = 0;
		}
		~Phonebook() {
			std::cout << "Phonebook's Destructor Called" << std::endl;
		}
};

void starting_text();
void exit_function();
void search_function();
size_t str_len(const std::string &str);

#endif