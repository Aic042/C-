/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:12 by root              #+#    #+#             */
/*   Updated: 2026/05/11 11:57:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP  
# define FIXED_HPP
#include  <iostream>
#include <cmath>

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
		Fixed& operator=(const Fixed& other);
		Fixed(int const raw); //el int
		Fixed(float const raw); //el float
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& o, const Fixed& fxam);

#endif
