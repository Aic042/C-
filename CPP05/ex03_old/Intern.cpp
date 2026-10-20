/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 11:06:51 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/08 08:56:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern locked and loaded!" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern deconstructor has been called" << std::endl;

}

Intern::Intern(const Intern &other)
{
    (void)other;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    std::cout << "Intern copy assignment operator called" << std::endl;
    return (*this);
}
//statics for the Makeform
static AForm *makePresidential(std::string const &target) {
    return new PresidentialPardonForm(target);
}

static AForm *makeRobotomy(std::string const &target) {
    return new RobotomyRequestForm(target);
}

static AForm *makeShrubbery(std::string const &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string Form_Name , std::string target_form) 
{
    int i = 0;
    std::string available_options[3] = {"presidential request", "robotomy request", "shrubbery request"};
    AForm *(*formCreators[3])(std::string const &target) = {
            &makePresidential,
            &makeRobotomy,
            &makeShrubbery
        };
    while (i != 3 && Form_Name != available_options[i])
        i++;
    if (i == 3)
    {
        std::cout << "Intern cannot create " << Form_Name << std::endl;
        return NULL;
    }
    std::cout << "Intern creates " << Form_Name << std::endl;
    return formCreators[i](target_form);
}
