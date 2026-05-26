/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:54:00 by root              #+#    #+#             */
/*   Updated: 2026/05/26 17:44:46 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:

    public:
        WrongCat();
        WrongCat(const WrongCat &other); //copy constructor
        WrongCat &operator=(const WrongCat &other); //copy assignment operator
        ~WrongCat();
    
        void makeSound() const;
};

#endif