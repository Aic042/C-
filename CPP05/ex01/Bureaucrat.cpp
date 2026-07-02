/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:07:05 by root              #+#    #+#             */
/*   Updated: 2026/07/01 13:01:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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


void Bureaucrat::signForm(Form &form)
{
	if (this->grade <= form.getGradeToSign())
	{
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because their grade is too low." << std::endl;
		throw GradeTooLowException();
	}
	return *this;
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

