/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 13:11:45 by root              #+#    #+#             */
/*   Updated: 2026/05/21 00:36:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap();
        ScavTrap &operator=(const ScavTrap &other);
		ScavTrap(const ScavTrap &other);
		
		void guardGate();
		void attack(const std::string &target);
};

#endif