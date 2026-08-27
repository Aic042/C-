/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 11:02:47 by root              #+#    #+#             */
/*   Updated: 2026/08/22 12:20:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
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