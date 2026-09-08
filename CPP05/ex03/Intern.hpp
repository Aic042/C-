/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:44:38 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/08 08:41:37 by root             ###   ########.fr       */
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
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);
        AForm *makeForm(std::string Form_Name , std::string target_form) ;


};


#endif 