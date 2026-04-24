# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>	// To use toupper()
#include <stdlib.h>   

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string* stringPTR = &variable;
    std::string &stringREF = variable;

    std::cout << &variable << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "El valor de variable es: " << variable << std::endl;
    std::cout << "El valor apuntado por stringPTR es: " << *stringPTR << std::endl;
    std::cout << "El valor apuntado por stringREF es: " << stringREF << std::endl;
}