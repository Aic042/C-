/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 00:40:12 by root              #+#    #+#             */
/*   Updated: 2026/08/07 19:41:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream> 

class Bureaucrat;

class Form{
	private:
		std::string const name;
		bool		was_signed;
		int	const	grade_to_sign;
		int	const	grade_to_execute;
	public:
		virtual void checkerSign();
		virtual void checkerExecute();
		virtual int getGradeToSign();
		virtual int getGradeToExecute();
		virtual const std::string getName();
		Form(std::string name, int grade_to_sign, int	 grade_to_execute);
		virtual void execute() const = 0; 
		virtual ~Form();
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Exception: Form's Grade is too high.";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Exception: Form's Grade is too low.";
				}
		};
		class IsntSignedException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Exception: Form isn't signed.";
				}
		};
};



#endif