#ifndef FIXED  
# define FIXED
#include  <iostream>
#include <math.h>

class Fixed
{
	private:
		int fixed_point_num_value;
		static const int frational_bits = 8;
	public:
		Fixed ();
		~Fixed();
		Fixed(const Fixed &copied);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed& operator=(const Fixed& other);
		Fixed(int const raw); //el int
		Fixed(float const raw); //el float
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& o, const Fixed& fxam);

#endif
