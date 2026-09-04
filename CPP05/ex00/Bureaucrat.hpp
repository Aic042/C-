/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:54:28 by root              #+#    #+#             */
/*   Updated: 2026/09/03 13:52:13 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

# include <iostream>
# include <cctype>
# include "exceptions.hpp"
# include <exception>


class Bureaucrat
{
	const 		std::string  name;
	int grade;
	
	private:
		void setgrade();
	public:
		int getgrade() const;
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
		std::string getName() const;

		// GradeTooHighException GradeTooHighException();
		// GradeTooLowException GradeTooLowException();
		// void GradeTooHighException();
		// void GradeTooLowException();		
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
		void incrementGrade(); // grado - 1
		void decrementGrade(); // grado + 1 
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &b);

#endif