/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 00:40:12 by root              #+#    #+#             */
/*   Updated: 2026/10/14 11:07:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream> 
# include <exception>
# include <string>

class Bureaucrat;

class Form{
	private:
		std::string const name;
		bool		was_signed;
		int	const	grade_to_sign;
		int	const	grade_to_execute;
	public:
		void beSigned(Bureaucrat const &bureaucrat);
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getIsSigned() const;
		std::string getName() const;
		Form();
		Form(std::string name, int grade_to_sign, int	 grade_to_execute);
		Form(Form const &other);
		~Form();
		Form &operator=(const Form &other);

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
};

std::ostream &operator<<(std::ostream &output, Form const &form);
#endif