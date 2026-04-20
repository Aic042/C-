#ifndef HORDE
# define HORDE

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>	// To use toupper()
#include <stdio.h>   
#include <stdlib.h>     

class Zombie
{
	private:
		std::string zombie_name;
	public:
		int horde_size;
		void announce();

	Zombie* zombieHorde( int N, std::string name );


};


#endif 