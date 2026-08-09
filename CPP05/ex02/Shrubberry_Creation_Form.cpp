#include "Shrubberry_Creation_Form.hpp"

ShrubberryCreationForm::ShrubberryCreationForm(std::string target) : Form("ShrubberryCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberryCreationForm constructor called" << std::endl;
}

ShrubberryCreationForm::ShrubberryCreationForm(ShrubberryCreationForm const &other) : Form(other), target(other.target)
{
	std::cout << "ShrubberryCreationForm copy constructor called" << std::endl;
}

ShrubberryCreationForm &ShrubberryCreationForm::operator=(const ShrubberryCreationForm &other)
{
	if (this != &other)
	{
		this->target = other.target;
	}
	std::cout << "ShrubberryCreationForm copy assignment operator called" << std::endl;
	return *this;
}

