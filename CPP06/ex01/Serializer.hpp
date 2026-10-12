/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:49 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/05 14:08:28 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER
# define SERIALIZER

# include <iostream>
# include <cctype>
# include <exception>
# include <cmath>     // round
# include <cstdlib>   // exit
# include <sstream>
# include <iostream>
# include <string>

class Data
{
  //Unknow
    int data_value = 0; //????
    int data_id = 1;

	Data();
	~Data();
	Data(const Data &other);
	Data & operator =(const Data &other);
};

class Serializer
{
	public:
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
	//No Orthodox Canon Form in public
	private:
	//add Orthodox canoform 
};


#endif