/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 00:40:12 by root              #+#    #+#             */
/*   Updated: 2026/08/10 12:05:05 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream> 

class Form{
	private:
		std::string const name;
		bool		was_signed;
		int	const	grade_to_sign;
		int	const	grade_to_execute;
	public:
		void checkerSign();
		void checkerExecute();
		int getGradeToSign();
		int getGradeToExecute();
		const std::string getName();
		Form(std::string name, int grade_to_sign, int	 grade_to_execute);
		Form(Form const &other);
		~Form();
		Form &operator=(const Form &other);

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
};

#endif