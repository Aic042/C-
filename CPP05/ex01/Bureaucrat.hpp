/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:54:28 by root              #+#    #+#             */
/*   Updated: 2026/10/14 14:47:56 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

# include <iostream>
# include <cctype>
# include "Form.hpp"
# include <exception>
# include <string>
class Bureaucrat
{
	std::string const name;
	int grade;
	
	private:
	
	public:
		std::string getName() const;
		int getGrade() const;
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);		
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
		void signForm(Form &form);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual	const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual	const char *what() const throw();
		};
		void incrementGrade(); // grado - 1
		void decrementGrade(); // grado + 1 
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &b);


#endif