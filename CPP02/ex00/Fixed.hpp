/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:00 by root              #+#    #+#             */
/*   Updated: 2026/05/11 11:29:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP  
# define FIXED_HPP
#include  <iostream>

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

};

#endif
