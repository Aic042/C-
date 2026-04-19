
#ifndef HARL
# define HARL

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>	// To use toupper()
# include <stdio.h>   
# include <stdlib.h>     

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};

#endif