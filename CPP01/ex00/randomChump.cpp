#include "lib.hpp"

void randomChump(std::string name)
{
	Zombie randomChump(name);
	std::cout << randomChump->zombie_name << ": BraiiiiiiinnnzzzZ...\n";
}