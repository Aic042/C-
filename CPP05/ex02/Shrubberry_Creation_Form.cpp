#include "Shrubberry_Creation_Form.hpp"

ShrubberryCreationForm::ShrubberryCreationForm(std::string target) : AForm("ShrubberryCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberryCreationForm constructor called" << std::endl;
}

ShrubberryCreationForm::ShrubberryCreationForm(ShrubberryCreationForm const &other) : AForm(other), target(other.target)
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

ShrubberryCreationForm::~ShrubberryCreationForm()
{
	std::cout << "ShrubberryCreationForm destructor called" << std::endl;
}

void ShrubberryCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getgrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getWasSigned())
		throw AForm::IsntSignedException();
	std::ofstream outfile((this->target + "_shrubbery").c_str());
	if (!outfile)
	{
		std::cerr << "Error: Could not open file " << target.c_str() << "_shrubbery" << std::endl;
		return;
	}
	
}

//	std::ofstream outfile(target.c_str() + "_shrubbery");
