#include "phonebook.hpp"
#include "Contact.hpp"

void Phonebook::add()
{
	contacts[index].setContact();

	index++;
	number_of_contacts++;

	if (index == 8)
		index = 0;
	if (number_of_contacts > 8)
		number_of_contacts = 8;
}

void starting_text()
{
	std::cout << BOLD_ON << "What mode will you use?\n" << BOLD_OFF;
	std::cout << BOLD_ON << "Options are: Add, Exit and Search\n" << BOLD_OFF;
}
void exit_function()
{
	std::cout << "Program is quiting, contacts will be lost forever\n";
}

void Phonebook::search()
{
        if (number_of_contacts == 0)
        {
                std::cout << "No contacts saved\n";
                return;
        }
        print();
}


void Contact::display()
{
	std::cout << first_name << " " << last_name << '\n';
	std::cout << "Nickname is " << nickname << '\n';
	std::cout << "Phone Number is " << phone_number << '\n';
	std::cout << "And their darkest secret is " << phone_number << '\n';
}

void Phonebook::print()
{
	int i = 0;
	while (i != number_of_contacts)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << contacts[i].phone_getter() << "|";
		std::cout << std::setw(10) << contacts[i].first_name_getter() << "|";
		std::cout << std::setw(10) << contacts[i].last_name_getter() << "|";
		std::cout << std::setw(10) << contacts[i].nickname_name_getter() << std::endl;
		i++;
	}
	
}