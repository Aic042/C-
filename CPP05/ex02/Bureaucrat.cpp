/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:07:05 by root              #+#    #+#             */
/*   Updated: 2026/08/31 22:40:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
	std::cout << "Bureaucrat " << this->name << " created with grade: " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat copy created with grade: " << this->grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->name << " destroyed " << std::endl;
}

int Bureaucrat::getgrade() const
{
	return (this->grade);
}

void Bureaucrat::setgrade(int grade)
{
	this->grade = grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}


void Bureaucrat::signAForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "Form " << this->name << " has been signed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
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

void Bureaucrat::executeAForm(AForm &AForm) const
{
	try
	{
		AForm.execute(*this);
		std::cout << this->name << " has been executed succesfully " << AForm.getName() << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " couldn't execute " << AForm.getName() << " because: " << e.what() << std::endl;
	}
}

void Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
	{
		throw GradeTooHighException();
	}
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade >= 150)
	{
		throw GradeTooLowException();
	}
	this->grade++;
}