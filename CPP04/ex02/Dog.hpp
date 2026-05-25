/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:48:24 by root              #+#    #+#             */
/*   Updated: 2026/05/25 23:20:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:

    public:
        void makeSound() const;
        Dog(std::string type);
        Dog();
        virtual ~Dog();
    Dog(const Dog &other); //copy constructor
    Dog &operator=(const Dog &other); //copy assignment operator
};

#endif