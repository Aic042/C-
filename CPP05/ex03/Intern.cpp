/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 11:06:51 by aingunza          #+#    #+#             */
/*   Updated: 2026/08/31 20:29:22 by root             ###   ########.fr       */
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

AForm *Intern::makeForm(std::string Form_Name , std::string target_form) 
{
    std::string available_options[3] = {"presidential request", "robotomy request", "shruberry request"};
    int i = 0;
    while (i != 3 && Form_Name != available_options[i])
    {
        i++;
    }
    
    switch (i)
    {
    case (0):
        std::cout << "case 1 ongoing" << std::endl;
        std::cout << "Intern creates " << Form_Name << std::endl;
        std::cout << "President gives his case!" << std::endl;
        return((new PresidentialPardonForm(target_form)));
        break;
    case (1):
        std::cout << "case 2 ongoing" << std::endl;
        std::cout << "Intern creates " << Form_Name << std::endl;
        std::cout << "Roboto gives his case!" << std::endl;
        return((new RobotomyRequestForm(target_form)));
        break;
    case (2):
        std::cout << "case 3 ongoing" << std::endl;
        std::cout << "Intern creates " << Form_Name << std::endl;
        std::cout << "Shruberrierr gives his case!" << std::endl;
        return((new ShrubberryCreationForm(target_form)));
        break;
    case (3):
        std::cout << "PEEP, ERROR!!!" << std::endl;
        std::cout << "casoooo cerraaadoooo" << std::endl;
        return (NULL);
    }
    return 0;
}

// static void function_caser(int (*funcptr)())
// {
//     std::cout << funcptr() << std::endl;
// }

