/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 00:32:25 by root              #+#    #+#             */
/*   Updated: 2026/07/01 12:50:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const std::string Form::getName() {
	return(this->name);
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) 
: name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if(!grade_to_sign || !grade_to_execute)
	{
		std::cout << "grade is currently invalid" << std::endl; 
	}
	if(grade_to_sign < 1 || grade_to_execute < 1)
	{
		throw Form::GradeTooHighException();
		std::cout << "grade is currently invalid: Too High" << std::endl; 
	}
	if(grade_to_sign > 150 || grade_to_execute > 150)
	{
		throw Form::GradeTooLowException();
		std::cout << "grade is currently invalid: Too low" << std::endl; 
	}
	std::cout << "Form constructor called for: " << this->name << std::endl;
	std::cout << "Grade to sign: " << this->grade_to_sign << std::endl;
	std::cout << "Grade to execute: " << this->grade_to_execute << std::endl;
}

Form::~Form() {
	// Destructor implementation (if needed)
	std::cout << "Form destructor called for: " << this->name << std::endl;
}

int Form::getGradeToSign() {
	return this->grade_to_sign;
}

int Form::getGradeToExecute() {
	return this->grade_to_execute;
}