#include "Bureaucrat.hpp"
#include "Form.hpp" 

// void Bureaucrat::GradeTooLowException()
// {
// 	try
// 	{
// 		if(this->grade >= 1)
// 			std::cout << "Grade is more than 0." << std::endl;
// 		else
// 			throw(this->grade);
// 	}
// 	catch(int myGrade)
// 	{
// 		std::cout << "Access denied - You must be in the right grade range.\n";
// 		std::cout << "Grade is: " << myGrade << std::endl;
// 		std::cout << "Grade is too low." << std::endl;
// 	}
// }

// void Bureaucrat::HighGradeChecker()
// {
// 	try
// 	{
// 		if(this->grade > 150)
// 			std::cout << "Grade is less than 150." << std::endl;
// 		else
// 			throw(GradeTooHighException());
// 	}
// 	catch(int myGrade)
// 	{
// 		std::cout << "Access denied - You must be in the right grade range.\n";
// 		std::cout << "Grade is: " << myGrade << std::endl;
// 		std::cout << "Grade is too high." << std::endl;
// 	}
// }

// usamos el : name(name) en vez de this->name = name; para inicializar los const aunque no me agrada >:(

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
	std::cout << "Bureaucrat created with grade: " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat copy created with grade: " << this->grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destroyed." << std::endl;
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

