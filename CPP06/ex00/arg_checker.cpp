/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checker.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:38:20 by root              #+#    #+#             */
/*   Updated: 2026/09/22 21:04:33 by root             ###   ########.fr       */
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

// bool is_arg_a_float(char *str)
// {
//     int i = 0;
//     if (str[i] == '-' || str[i] == '+')
//         i++;
//     while (str[i])
//     {
//         if(str[i - 1] != 'f')
//         {
//             std::cout << "this isn't a float" << std::endl;
//             return (0);
//         }
//         else
//         {
//             std::cout << "this is a float" << std::endl;
//             return (1);
//         }
//     } 
//     return (0);
// }
bool is_arg_a_char(char *str)
{
    std::string s(str);
    return (s.size() == 1 && !std::isdigit(static_cast<unsigned char>(s[0])));
}

bool is_arg_a_float(char *str)
{
    std::string s(str);                    // convertir a std::string es más cómodo
    if (s.empty())
        return false;
    bool hasDot = (s.find('.') != std::string::npos);
    bool endsWithF = (s[s.size() - 1] == 'f');
    return (hasDot && endsWithF);
}

bool is_arg_a_double(char *str)
{
    std::string s(str);
    if (s.empty())
        return false;
    bool hasDot = (s.find('.') != std::string::npos);
    bool endsWithF = (s[s.size() - 1] == 'f');
    return (hasDot && !endsWithF);
}

bool is_special_char(char *str)
{
    std::string s(str);
    if (s.empty())
        return false;
    return (s == "inff" || s == "-inff" || s == "nanf" || s == "nan" || s == "inf" || s == "-inf" );
}

bool is_arg_a_int(char *str)
{
    std::string s(str);
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.size(); ++i)
    {
        if (i == 0 && (s[i] == '-' || s[i] == '+'))
            continue;
        if (!std::isdigit(static_cast<unsigned char>(s[i])))
            return false;
    }
    return true;
}

int type_of_arg(char *str)
{
    if (is_special_char(str))   
        return 3;
    if (is_arg_a_char(str))     
        return 4;
    if (is_arg_a_float(str))    
        return 1;
    if (is_arg_a_double(str))   
        return 2;
    if (is_arg_a_int(str))      
        return 5;
    return 0;                               // int
}