#include <iostream>
#include <iomanip>
#include <stdio.h>

int main()
{
	char *string1;
	string1 = NULL;
	std::cin >> string1;
	std::cout << printf(string1, "%s\n");
	
	return 0;
}
