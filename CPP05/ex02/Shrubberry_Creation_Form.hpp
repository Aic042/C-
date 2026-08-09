/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shrubberry_Creation_Form.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 11:02:47 by root              #+#    #+#             */
/*   Updated: 2026/08/07 19:31:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberryCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberryCreationForm(std::string target);
		ShrubberryCreationForm(ShrubberryCreationForm const &other);
		ShrubberryCreationForm &operator=(const ShrubberryCreationForm &other);
		virtual ~ShrubberryCreationForm(); 
		
		
		void execute(Bureaucrat const &executor) const;
};

#endif