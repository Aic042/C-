/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 00:40:12 by root              #+#    #+#             */
/*   Updated: 2026/08/07 19:41:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

# include <iostream> 


class Bureaucrat;

class AForm{
	private:
		std::string const name;
		int	const	grade_to_sign;
		int	const	grade_to_execute;
		bool 		was_signed;
	public:
		// virtual void checkerSign() const	;
		// virtual void checkerExecute() const	;
		bool		getWasSigned() const;
		virtual int getGradeToSign() const	;
		virtual int getGradeToExecute() const	;
		virtual const std::string getName() const;
		AForm(std::string name, int grade_to_sign, int	 grade_to_execute);
		virtual void execute(Bureaucrat const &bureaucrat) const = 0; 
		virtual ~AForm();
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Exception: AForm's Grade is too high.";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Exception: AForm's Grade is too low.";
				}
		};
		class IsntSignedException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Exception: AForm isn't signed.";
				}
		};
};



#endif