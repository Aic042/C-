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
	std::cout << BOLD_ON << "Options are: ADD, EXIT and SEARCH\n" << BOLD_OFF;
}
void exit_function()
{
	std::cout << "Program is quiting, contacts will be lost forever\n";
}

int is_number(const std::string &str)
{
        int i = 0;

        if (str.empty())
                return (0);

        while (str[i])
        {
                if (!std::isdigit(str[i]))
                        return (0);
                i++;
        }
        return (1);
}

void Phonebook::search()
{
	if (number_of_contacts == 0)
	{
		std::cout << "No contacts saved\n";
		return;
	}
	print();
	std::cout << "Choose contact to display info" << std::endl;
	
	std::string input;
	std::getline(std::cin, input);
	if (!is_number(input))
	{
			std::cout << "Invalid index\n";
			return;
	}
	int index = std::atoi(input.c_str());
	if (index < 1 || index > number_of_contacts)
	{
			std::cout << "Invalid index\n";
			return;
	}
	contacts[index].display();
}


void Contact::display()
{
	std::cout << first_name << " " << last_name << '\n';
	std::cout << "Nickname is " << nickname << '\n';
	std::cout << "Phone Number is " << phone_number << '\n';
	std::cout << "And their darkest secret is " << secret << '\n';
}
std::string string_truncater(const std::string str)
{
	std::string new_string;
	if(str_len(str) >= 10)
	{
		new_string = str.substr(0, 9) + ".";
	}
	else
		new_string = str;
	return(new_string);
}

void Phonebook::print()
{
	int i = 1;
	while (i != number_of_contacts + 1)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << string_truncater(contacts[i - 1].first_name_getter()) << "|";
		std::cout << std::setw(10) << string_truncater(contacts[i - 1].last_name_getter()) << "|";
		std::cout << std::setw(10) << string_truncater(contacts[i - 1].nickname_name_getter()) << "|" << std::endl;
		i++;
	}
}
