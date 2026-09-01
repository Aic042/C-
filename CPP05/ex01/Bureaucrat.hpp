/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:54:28 by root              #+#    #+#             */
/*   Updated: 2026/09/01 12:23:56 by aingunza         ###   ########.fr       */
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
		std::string getName() const;
		int getgrade() const;
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
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
		void incrementGrade(); // grado - 1
		void decrementGrade(); // grado + 1 
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &b);


#endif