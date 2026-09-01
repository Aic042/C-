/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 00:32:25 by root              #+#    #+#             */
/*   Updated: 2026/07/01 12:50:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
# include "Bureaucrat.hpp"

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getgrade() <= this->grade_to_sign)
		this->was_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const std::string AForm::getName() const{
	return(this->name);
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) 
: name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute), was_signed(false)
{
	if(!grade_to_sign || !grade_to_execute)
	{
		std::cout << "grade is currently invalid" << std::endl; 
	}
	if(grade_to_sign < 1 || grade_to_execute < 1)
	{
		std::cout << "grade is currently invalid: Too High" << std::endl; 
		throw AForm::GradeTooHighException();
	}
	if(grade_to_sign > 150 || grade_to_execute > 150)
	{
		std::cout << "grade is currently invalid: Too low" << std::endl; 
		throw AForm::GradeTooLowException();
	}
	std::cout << "AForm constructor called for: " << this->name << std::endl;
	std::cout << "Grade to sign: " << this->grade_to_sign << std::endl;
	std::cout << "Grade to execute: " << this->grade_to_execute << std::endl;
}




AForm::~AForm() {
	// Destructor implementation (if needed)
	std::cout << "AForm destructor called for: " << this->name << std::endl;
}

int AForm::getGradeToSign() const {
	return this->grade_to_sign;
}

int AForm::getGradeToExecute() const {
	return this->grade_to_execute;
}

bool AForm::getWasSigned() const {
	return this->was_signed;
}