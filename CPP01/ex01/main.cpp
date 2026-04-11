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
	}
	result = atoi(argv);
	return (result);
}


int main(int argc, char **argv)
{
	int i = 0;
	int horde_num = 0;
	(void)argc;
	if (!argv)
	{
		std::cout << "Faltan argumentos!";
		return (-1);
	}
	horde_num = arg_numcheck(argv[0]);
	while (i < horde_num)
	{
		Zombie* Randomhorder = new Zombie; 
		Randomhorder->zombie_name = "zombie" + std::to_string(i);;
		Randomhorder->announce();

	}
	
}