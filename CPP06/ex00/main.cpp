/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:47 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/08 17:53:09 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"   


void arg_type_check(char *str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if(str[i] == '\0')
    {
        std::cout << "Argument is not a number" << std::endl;
        exit(-1);
    }
    if (isdigit(str[i]))
    {
        std::cout << "argument isn't digit" << std::endl;
    }
}

int is_arg_a_float(char *str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if(str[i - 1] != 'f')
        {
            std::cout << "this isn't a float" << std::endl;
            return (0);
        }
        else
        {
            std::cout << "this is a float" << std::endl;
            return (1);
        }
    } 
}


int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Only one argument!!" << std::endl;
        return(-1);
    }   
    char* str = argv[1];
    // double = str;

    // char    converted_char;
    int     converted_int;
    double  converted_double;
    float   converted_float;
    
    // converted_char = static_cast<char>(str);
    // converted_int = (int)(str);
    // converted_double = static_cast<double>(str);
    // converted_float = static_cast<float>(str);

    // converted_char = static_cast<char>(str);
    converted_int = string_to_integer(str);
    converted_double = string_to_double(str);
    converted_float = string_to_float(str);

    std::cout << "Raw argument is :" << argv[1] << std::endl;
    // std::cout << "Char is :" << converted_char << std::endl;
    std::cout << "Int is :" << converted_int << std::endl;
    std::cout << "Double is :" << converted_double << std::endl;
    std::cout << "Float is :" << converted_float << std::endl;
}

//Static_cast 