#include "lib.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Zombie *Zombie1;

	Zombie1 = newZombie("New zombie");
	Zombie1->announce();
	randomChump("Random");
	delete Zombie1;
	return (0);
}


