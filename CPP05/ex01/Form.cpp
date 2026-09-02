/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 00:32:25 by root              #+#    #+#             */
/*   Updated: 2026/09/02 10:26:53 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &output, Form const &form)
{
	output << form.getName() << " form, grade to sign " << form.getGradeToSign() << " and grade to execute is " << form.getGradeToExecute() << std::endl;
	return (output);
}

std::string Form::getName() const{
	return(this->name);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getgrade() <= this->grade_to_sign)
		this->was_signed = true;
	else
		throw Form::GradeTooLowException();
}


Form::Form(std::string name, int grade_to_sign, int grade_to_execute) 
: name(name),  was_signed(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if(!grade_to_sign || !grade_to_execute)
	{
		std::cout << "grade is currently invalid" << std::endl; 
	}
	if(grade_to_sign < 1 || grade_to_execute < 1)
	{
		std::cout << "grade is currently invalid: Too High" << std::endl; 
		throw Form::GradeTooHighException();
	}
	if(grade_to_sign > 150 || grade_to_execute > 150)
	{
		std::cout << "grade is currently invalid: Too low" << std::endl; 
		throw Form::GradeTooLowException();
	}
	std::cout << "Form constructor called for: " << this->name << std::endl;
	std::cout << "Grade to sign: " << this->grade_to_sign << std::endl;
	std::cout << "Grade to execute: " << this->grade_to_execute << std::endl;
}

Form::~Form() {
	// Destructor implementation (if needed)
	std::cout << "Form destructor called for: " << this->name << std::endl;
}

int Form::getGradeToSign() const{
	return this->grade_to_sign;
}

int Form::getGradeToExecute() const{
	return this->grade_to_execute;
}

Form::Form(Form const &other) : name(other.name) , grade_to_sign(other.grade_to_sign	), grade_to_execute(other.grade_to_execute)
{
	std::cout << "Form copy constructor called, copied from " << other.name << " form" << std::endl;
}