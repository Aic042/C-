#ifndef FIXED  
# define FIXED
#include  <iostream>

class Fixed
{
	private:
		int fixed_point_num_value;
		static const int frational_bits;
	public:
		Fixed (){
			std::cout << "Constructor has been called" << std::endl;
			this->fixed_point_num_value = 0;
		}
		~Fixed(){
			std::cout << "This object is being destroyed" << std::endl;
		}
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
