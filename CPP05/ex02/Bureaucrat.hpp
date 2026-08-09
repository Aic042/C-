/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:54:28 by root              #+#    #+#             */
/*   Updated: 2026/08/08 13:36:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

# include <iostream>
# include <cctype>
# include "Form.hpp"

class Bureaucrat
{
	std::string const name;
	int grade;
	
	private:
		void setgrade();
	public:
		int getgrade();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
		void HighGradeChecker();
		Bureaucrat signForm(Form &form);
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Grade is too high.";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Grade is too low.";
				}
		};
		void executeForm(Form &form);
};

#endif