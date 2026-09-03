/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:47 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/03 14:10:26 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"   

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Only one argument!!" << std::endl;
        return(-1);
    }   
    std::cout << "Raw argument is :" << argv[1] << std::endl;
    
}