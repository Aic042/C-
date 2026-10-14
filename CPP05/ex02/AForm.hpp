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
# include <ctime>
# include <cstdlib>


class Bureaucrat;

class AForm{
	private:
		std::string const name;
		int	const	grade_to_sign;
		int	const	grade_to_execute;
		bool 		was_signed;
	public:
		void 		beSigned(Bureaucrat const &bureaucrat);
		bool		getWasSigned() const;
		virtual int getGradeToSign() const	;
		virtual int getGradeToExecute() const	;
		virtual const std::string getName() const;
		AForm(std::string name, int grade_to_sign, int	 grade_to_execute);
		virtual void execute(Bureaucrat const &bureaucrat) const = 0; 
		virtual ~AForm();
		AForm(AForm const &other);
		AForm ();
		AForm &operator=(AForm const &other);

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
		class IsntSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();

		};
};

std::ostream &operator<<(std::ostream &output, AForm const &form);


#endif