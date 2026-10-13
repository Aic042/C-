/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:54:28 by root              #+#    #+#             */
/*   Updated: 2026/10/14 00:32:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

# include <iostream>
# include <cctype>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <fstream>

class Bureaucrat
{
	std::string const name;
	int grade;
	
	private:
		void setgrade(int grade);
	public:
	
		std::string getName() const;
		int getGrade() const;
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
		void signAForm(AForm &AForm);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		void executeForm(AForm const &AForm) const;
		void incrementGrade(); // grado - 1
		void decrementGrade(); // grado + 1 

};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &b);

#endif