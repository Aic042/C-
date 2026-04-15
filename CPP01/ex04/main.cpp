#include <deque>
#include <fstream>
#include <cctype>
#include <iostream> // To use cout

// int initial_checker(int argc, char **argv, std::string file_name, std::string replacable, std::string replaced)
// {
// 	if (argc != 4)
// 		return(std::cout << "Error in initial checker" ,-1);
// 	if(!argv[1] || !argv[2] || !argv[3])
// 		return(std::cout << "Error in initial checker" ,-1);

// 	return (0);
// }

int main(int argc, char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string file_name;
	std::string replaced;
	std::string	replacable;
	std::string extension;
	std::string line;
	std::string file_content;
	extension = ".replace";
	(void)argc;
	// if(initial_checker(argc, argv, file_name, replacable, replaced))
	// 	return (-1);
	file_name = argv[1];
	replacable = argv[2];
	replaced = argv[3];
	if(file_name.empty() || replacable.empty() || replaced.empty())
		return(std::cout << "Error in initial checker: args cannot be empty" ,-1);
	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "Error reading the file! " << std::endl;
		return(-1);
	}
	file_name = argv[1];
	file_name.append(extension);
	outfile.open(file_name.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Error creating the file" << std::endl;
		return(-1);
	}
	while (std::getline(infile, line))
	{
		file_content += line;
		if(!infile.eof())
			file_content += "\n";
	}
	
	infile.close();
	outfile.close();
}