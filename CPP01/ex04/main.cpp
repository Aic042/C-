#include <deque>
#include <fstream>
#include <cctype>
#include <iostream> // To use cout

int initial_checker(int argc, char **argv)
{
	if (argc != 4)
		return(std::cout << "Error in initial checker" ,-1);
	if(!argv[1] || !argv[2] || !argv[3])
		return(std::cout << "Error in initial checker" ,-1);
	if(argv[2][0] == ' ' || argv[3][0] == ' ')
		return(std::cout << "Error in initial checker: args cannot be empty" ,-1);
	return (0);
}

int main(int argc, char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string file_name;
	std::string replaced;
	std::string	replacable;
	std::string extension;
	extension = ".replace";

	if(initial_checker(argc, argv))
		return (-1);
	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "Error reading the file! " << std::endl;
		return(-1);
	}
	file_name = argv[1];
	file_name.append(extension);
	outfile.open(file_name);
	if (!outfile.is_open())
	{
		std::cout << "Error creating the file" << std::endl;
		return(-1);
	}

	
	infile.close();
	outfile.close();
}