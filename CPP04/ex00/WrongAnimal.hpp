/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:49:45 by root              #+#    #+#             */
/*   Updated: 2026/05/25 22:04:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    public:     
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &other); //copy constructor
        WrongAnimal &operator=(const WrongAnimal &other); //copy assignment operator

        void makeSound() const; //no virtual
        std::string getType() const;

};

#endif