/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 00:07:00 by root              #+#    #+#             */
/*   Updated: 2026/05/21 00:30:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>

class ClapTrap
{
	protected:
		std::string Bot_Name;
		int Hit_Points;
		int Energy_Points;
		int Attack_Damage;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void set_stats(int Hit_Points, int eng_points, int attack_dmg);
		void print_stats();
		ClapTrap(std::string name);
		ClapTrap();	
		~ClapTrap();
};

#endif