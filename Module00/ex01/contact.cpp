#include "phonebook.hpp"
#include "Contact.hpp"

// void Contact::setContact()
// {
// 	std::cout << "First name: ";
// 	std::getline(std::cin, first_name);
// 	std::cout << "Last name: ";
// 	std::getline(std::cin, last_name);
// 	std::cout << "Nickname: ";
// 	std::getline(std::cin, nickname);
// 	std::cout << "Phone Number: ";
// 	std::getline(std::cin, phone_number);
// 	std::cout << "Darkest Secret: ";
// 	std::getline(std::cin, secret);
// }



void Contact::setContact()
{
	first_name = get_non_empty_input("First name: ");
	last_name = get_non_empty_input("Last name: ");
	nickname = get_non_empty_input("Nickname: ");
	phone_number = get_non_empty_input("Phone Number: ");
	while(!is_number(phone_number))
	{
		std::cout << "phone number input is not fully number, please try again";
		phone_number = get_non_empty_input("Phone Number: ");
	}
	secret = get_non_empty_input("Darkest secret: ");
}

void Phonebook::Contacts_tester()
{
	
}