/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:42:06 by root              #+#    #+#             */
/*   Updated: 2026/09/08 00:14:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other), target(other.target)
{

	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
        AForm::operator=(other);
		this->target = other.target;	
	}

	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getWasSigned())
		throw AForm::IsntSignedException();
	std::ofstream outfile((this->target + "_shrubbery").c_str());
	if (!outfile)
	{
		std::cerr << "Error: Could not open file " << target.c_str() << "_shrubbery" << std::endl;
		return;
	}
	else if (outfile)
	{
		outfile << "    /\\        /\\    \n";
		outfile << "   /  \\      /  \\   \n";
		outfile << "  /    \\    /    \\  \n";
		outfile << " /      \\  /      \\ \n";
		outfile << "/________\\/________\\\n";
		outfile << "    ||         ||    \n";
		outfile << "    ||         ||    \n";
		outfile << "    ||         ||    \n";

		outfile.close();
	}
}

//	std::ofstream outfile(target.c_str() + "_shrubbery");
