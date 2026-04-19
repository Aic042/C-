#include "Harl.hpp"

int main()
{
	std::string Mode;
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("a");
	return 0;
}
