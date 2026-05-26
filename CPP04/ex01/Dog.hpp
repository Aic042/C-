/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:48:24 by root              #+#    #+#             */
/*   Updated: 2026/05/26 13:11:52 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        void makeSound() const;
        Dog();
        virtual ~Dog();
    Dog(const Dog &other); //copy constructor
    Dog &operator=(const Dog &other); //copy assignment operator
    Brain* getBrain() const;

};

#endif
