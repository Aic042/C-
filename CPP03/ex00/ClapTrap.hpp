/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 00:05:57 by root              #+#    #+#             */
/*   Updated: 2026/05/21 00:21:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>

class ClapTrap
{
	private:
		std::string Bot_Name;
		int Hit_Points;
		int Energy_Points;
		int Attack_Damage;
	public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap(std::string name);
	ClapTrap();
	~ClapTrap();
	void set_stats(int Hit_Points, int eng_points, int attack_dmg);

};

#endif