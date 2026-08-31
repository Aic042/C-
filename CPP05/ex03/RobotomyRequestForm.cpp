#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other), target(other.target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		this->target = other.target;
	}
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getgrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getWasSigned())
		throw AForm::IsntSignedException();
	std::cout << " Drilling noises " << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else 
		std::cout << this->target << " has not been robotomized!!" << std::endl;
}
