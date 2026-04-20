#ifndef CLAPTRAP
# define CLAPTRAP

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>

class Claptrap
{
	private:
		std::string Bot_Name;
		int Hit_points;
		int Energy_points;
		int Attack_Damage;
	public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	Claptrap(std::string name){
		name = this->Bot_Name;
		this->Hit_points = 10;
		this->Energy_points = 10;
		this->Attack_Damage = 0;
		std::cout << "Claptrap " << this->Bot_Name << " has been constructed" << std::endl;
	}
	~Claptrap()
	{
		std::cout << "Claptrap " << this->Bot_Name << " has been deconstructed" << std::endl;
	}
};

#endif