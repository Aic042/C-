#ifndef CLAPTRAP
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
		void set_stats(int Hit_Points, int eng_points, int attack_dmg);
		ClapTrap(std::string name);
		~ClapTrap();
};

class ScavTrap : public ClapTrap
{
	private:
		std::string Scav_Name;
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
};

class FragTrap : public ClapTrap
{
	private:
		std::string Frag_Name;
	public:
		FragTrap(std::string Fa_name);
		~FragTrap();
		void highFivesGuys(void);
};

#endif