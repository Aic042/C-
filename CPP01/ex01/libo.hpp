
#ifndef HORDE
# define HORDE

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>	// To use toupper()
# include <stdio.h>

class Zombie
{
	private:
		std::string name;
	public:
		int horde_size;

	Zombie* zombieHorde( int N, std::string name );


};


#endif 