#ifndef VIOLENCE
# define VIOLENCE

# include <iostream> // To use cout
# include <cctype>	// To use toupper()
#include <stdio.h>   
#include <stdlib.h>     

class Weapon
{
	private:
		std::string objtype;
	public:
		const std::string& getType() const;
		void setType(std::string type);
		Weapon(std::string type);
		~Weapon();
};

#endif 