
#ifndef VIOLENCE
# define VIOLENCE

# include <iostream> // To use cout
# include <cctype>	// To use toupper()
#include <stdio.h>   
#include <stdlib.h>     

class Weapon
{
	std::string objtype;
	private:
	std::string getType(std::string type)
	{
		this->objtype = type;
	}

	void setType(std::string type)
	{
		this->objtype = type;
	}
};

class HumanA
{
	public:
		Weapon Human_A_Weapon;

};

class HumanB
{
	public:
		Weapon Human_B_Weapon;

};

#endif 