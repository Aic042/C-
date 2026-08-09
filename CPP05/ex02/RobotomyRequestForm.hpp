/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:19:52 by root              #+#    #+#             */
/*   Updated: 2026/07/21 13:25:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
#include "Form.hpp"


class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		virtual ~RobotomyRequestForm();
};
	
#endif