#include "libo.hpp"

int arg_numcheck(char *argv)
{
	int i = 0;
	int result = 0;
	while(argv[i])
	{	
		if(!isdigit(argv[i]))
		{
			std::cout << "Arg has non-digitss";
			return (0);
		}
		i++;
	}
	result = atoi(argv);
	return (result);
}


int main(int argc, char **argv)
{
	int i = 0;
	int horde_num = 0;
	if (argc != 2)
	{
		std::cout << "Faltan argumentos!";
		return (-1);
	}

	horde_num = arg_numcheck(argv[1]);
	Zombie* horde = zombieHorde(horde_num, "Z");
	while (i < horde_num)
	{
		horde[i].announce();
		i++;
	}

	delete[] horde;
}