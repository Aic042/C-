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
		Zombie(std::string name){  //Constructor
			zombie_name = name;
			std::cout << zombie_name << " Ha sido creado\n";
		}
		~Zombie(){  //Desstructor
			std::cout << zombie_name << " ha sido destruido\n";
		}
		void set_name(std::string name);

		Zombie* zombieHorde( int N, std::string name );

};


#endif 