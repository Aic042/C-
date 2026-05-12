/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:25 by root              #+#    #+#             */
/*   Updated: 2026/05/11 14:01:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED  
# define FIXED
#include  <iostream>
#include <math.h>

class Fixed
{
	private:
		int fixed_point_num_value;
		static const int fractional_bits = 8;
	public:
		Fixed ();
		~Fixed();
		Fixed(const Fixed &copied);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed& operator=(const Fixed& obj);
		Fixed(int const raw); //el int
		Fixed(float const raw); //el float
		float toFloat( void ) const;
		int toInt( void ) const;

	//....................operaciones..................
		Fixed operator+(const Fixed& obj) const;
		Fixed operator-(const Fixed& obj) const;
		Fixed operator*(const Fixed& obj) const;
		Fixed operator/(const Fixed& obj) const;

		bool operator>(const Fixed& obj) const;
		bool operator<(const Fixed& obj) const;
		bool operator>=(const Fixed& obj) const;
		bool operator<=(const Fixed& obj) const;
		bool operator==(const Fixed& obj) const;
		bool operator!=(const Fixed& obj) const;
	//-------------------Incre/Decre-------------------
		Fixed &operator++( void );
		Fixed &operator--( void );
		Fixed operator++( int );
		Fixed operator--( int );
	//-------------------Min/Max-------------------
		Fixed static &min( Fixed &obj1, Fixed &obj2 );
		Fixed static &max( Fixed &obj1, Fixed &obj2 );
		Fixed static const &min( Fixed const &obj1, Fixed const &obj2 );
		Fixed static const &max( Fixed const &obj1, Fixed const &obj2 );
};
std::ostream& operator<<(std::ostream& o, const Fixed& fxam);

#endif
