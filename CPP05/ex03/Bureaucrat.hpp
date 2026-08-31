/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:54:28 by root              #+#    #+#             */
/*   Updated: 2026/08/31 20:58:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

# include <iostream>
# include <cctype>
# include "AForm.hpp"
# include "Shrubberry_Creation_Form.hpp"
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
	
		int getgrade() const;
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
		void HighGradeChecker();
		void signAForm(AForm &AForm);
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
		void executeAForm(AForm &AForm) const;
		void incrementGrade(); // grado - 1
		void decrementGrade(); // grado + 1 

	std::ostream &operator<<(std::ostream &output, Bureaucrat const &b);

};

#endif