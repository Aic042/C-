#include "Bureaucrat.hpp"


// usamos el : name(name) en vez de this->name = name; para inicialzar los const aunque no me agrada >:(

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (this->grade > 150)
	{
		throw GradeTooLowException();
	}
	std::cout << "Bureaucrat " << this->name << " created with grade: " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat copy created with grade: " << this->grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->name << " destroyed." << std::endl;
}

int Bureaucrat::getgrade()
{
	return (this->grade);
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

class GradeTooHighException : public std::exception
{
	public:
		virtual const char* what () const throw()
		{
			return "Grade is too high.";
		}
};

class GradeTooLowException : public std::exception
{
	public:
		virtual const char* what () const throw()
		{
			return "Grade is too low.";
		}
};

