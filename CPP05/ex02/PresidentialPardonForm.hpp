/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 11:02:47 by root              #+#    #+#             */
/*   Updated: 2026/07/21 13:25:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();
};

#endif