/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:47 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/13 08:43:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int argc, char *argv[])
{
    Data *data = new Data();
    data->data_value = 0; //????
    data->data_id = 1;
		
	uintptr_t raw_data = Serializer::serialize(&data);
	
}

//Static_cast 