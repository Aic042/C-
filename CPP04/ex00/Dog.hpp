/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:48:24 by root              #+#    #+#             */
/*   Updated: 2026/05/25 21:53:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        std::string getType() const;
        void setType(std::string type);
    public:
        void makeSound() const;
        Dog();
        Dog(const Dog &other); //copy constructor
        Dog &operator=(const Dog &other); //copy assignment operator
        
        virtual ~Dog();
    };

#endif