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
	ClapTrap(std::string name);
	~ClapTrap();

};

#endif