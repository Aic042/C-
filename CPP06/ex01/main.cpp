/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:47 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/13 13:06:40 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//Usamos statics porque asi no hace falta crear un obj Serializerer

Data::Data()
{
   std::cout << "Data Constructor called"  << std::endl;
}

Data::~Data()
{
   std::cout << "Data Deconstructor called"  << std::endl;
}

int main()
{
    Data *data = new Data();
    data->data_value = 12345; 
    data->data_id = 1;
		
	uintptr_t raw_data = Serializer::serialize(data);
    data = Serializer::deserialize(raw_data);
	std::cout << "Data_Id was 1. Now Data_ID is: " << data->data_id  << std::endl;
	std::cout << "Data_value was 12345. Now Data_value is: " << data->data_value  << std::endl;
}

//Static_cast 