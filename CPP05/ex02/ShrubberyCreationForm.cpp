/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:42:06 by root              #+#    #+#             */
/*   Updated: 2026/10/20 15:53:17 by aingunza         ###   ########.fr       */
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

void ShrubberyCreationForm::action() const
{
        std::ofstream outfile((this->target + "_shrubbery").c_str());

        if (!outfile)
                throw FileOpenException(); 
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

//	std::ofstream outfile(target.c_str() + "_shrubbery");

// exception
const char *ShrubberyCreationForm::FileOpenException::what() const throw()
{
    return ("Could not open the shrubbery file.");
}
