/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:14:42 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/01 12:41:43 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << bureaucrat.getName() << " Bureaucrat, grade " << bureaucrat.getgrade() << std::endl;
	return (output);
}

// usamos el : name(name) en vez de this->name = name; para inicialzar los const aunque no me agrada >:(

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getgrade() const
{
	return (this->grade);
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
	std::cout << "Bureaucrat " << this->name << " destroyed." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
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