/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:58:02 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/07 12:19:19 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

# include <iostream>
# include <string> 
# include <exception>

template <typename T>
class Array
{   
    public:
        Array(); //creates an empty array
        Array(unsigned int n); //debe crear un array con n elements inicializo por default
        Array(Array &other);
        Array operator =(const Array &copy);
        
};

class OutOfBounds : public exception 
{
    OutOfBounds(int index) {};
    const char* what() const noexcept override{
        return "Index is out of bounds! \n";
    }
};

#endif


