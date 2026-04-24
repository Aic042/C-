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
			std::cout << "Default constructor has been called" << std::endl;
			this->fixed_point_num_value = 0;
		}
		~Fixed(){
			std::cout << "Destructor called" << std::endl;
		}
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed(Fixed &obj){
			std::cout << "Copy constructor has been called" << std::endl;
			obj.fixed_point_num_value = 0;
		}
	
};

#endif
