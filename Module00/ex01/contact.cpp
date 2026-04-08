#include "phonebook.hpp"
#include "Contact.hpp"

void Contact::setContact()
{
	first_name = get_non_empty_input("First name: ");
	last_name = get_non_empty_input("Last name: ");
	nickname = get_non_empty_input("Nickname: ");
	phone_number = get_non_empty_input("Phone Number: ");
	while(!is_number(phone_number))
	{
		std::cout << "phone number input is not fully number, please try again\n";
		phone_number = get_non_empty_input("Phone Number: ");
	}
	secret = get_non_empty_input("Darkest secret: ");
}
