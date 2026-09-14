/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checker.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:38:20 by root              #+#    #+#             */
/*   Updated: 2026/09/12 13:38:26 by root             ###   ########.fr       */
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

bool is_arg_a_float(char *str)
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
    return (0);
}

bool is_arg_a_double(char *str)
{
    int i = 0;
    bool is_a_dot_there = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        // if wee find a  . and not an f then it's a double 
        if(str[i] == '.')
        {
            is_a_dot_there = 1;
        }
        if(str[i - 1] == 'f')
        {
            // std::cout << "this is a float" << std::endl;
            return (0);
        }
        else if (is_a_dot_there == 1)
        {
            std::cout << "this is a double" << std::endl;
            return (1);
        }
    }
    return (0);
}

int type_of_arg(char *str)
{
    if (is_arg_a_float(str))
        return (1);
    else if (is_arg_a_double(str))
        return (2);
    else 
        return (0);
}