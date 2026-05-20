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
		~ClapTrap();
};

#endif