# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>	// To use toupper()
#include <stdlib.h>   

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string* stringPTR = &variable;
    std::string &stringREF = variable;

    std::cout << variable << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
}