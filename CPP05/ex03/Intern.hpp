/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:44:38 by aingunza          #+#    #+#             */
/*   Updated: 2026/08/31 15:42:58 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Intern
{
    private:
        /* data */
    public:
        Intern();
        ~Intern();
        AForm *makeForm(std::string Form_Name , std::string target_form) ;


};


#endif 