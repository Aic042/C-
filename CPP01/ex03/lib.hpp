
#ifndef VIOLENCE
# define VIOLENCE

# include <iostream> // To use cout
# include <cctype>	// To use toupper()
#include <stdio.h>   
#include <stdlib.h>     

class Human
{
	private:
		std::string objtype;
	public:

	std::string getType(std::string type){
		this->objtype = type;
	}

	void setType(std::string type)
	{
		this->objtype = type;
	}

};


#endif 