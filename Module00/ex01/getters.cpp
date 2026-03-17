#include "phonebook.hpp"
#include "Contact.hpp"

size_t str_len(const std::string &str)
{
	return str.size();
}

std::string Contact::first_name_getter() const 
{
	return (first_name);
}

std::string Contact::last_name_getter() const
{
	return(last_name);
}
std::string Contact::nickname_name_getter() const
{
	return(nickname);
}
std::string Contact::phone_getter() const
{
	return(phone_number);
}
std::string Contact::secret_getter() const
{
	return(secret);
}
//a getter is a function used to extract private info from a contact