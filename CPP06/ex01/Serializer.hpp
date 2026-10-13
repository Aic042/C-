/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:49 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/13 13:11:17 by aingunza         ###   ########.fr       */
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
# include <stdint.h>
# include <string>

class Data
{
	public:
		//Unknow
		int data_value; //????
		int data_id;
	public:
		Data();
		~Data();
		Data(const Data &other);
		Data & operator =(const Data &other);
};

class Serializer
{
	public:
		~Serializer();
		Serializer(Serializer const &other);
		Serializer &operator=(Serializer const &other);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	//No Orthodox Canon Form in public
	private:
		Serializer();
	//add Orthodox canoform 
};


#endif