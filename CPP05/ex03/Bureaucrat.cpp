/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:07:05 by root              #+#    #+#             */
/*   Updated: 2026/09/01 08:05:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// usamos el : name(name) en vez de this->name = name; para inicializar los const aunque no me agrada >:(

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << bureaucrat.getName() << "Bureaucrat, grade " << bureaucrat.getgrade() << std::endl;
	return (output);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

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
