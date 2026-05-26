/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:49:03 by root              #+#    #+#             */
/*   Updated: 2026/05/26 17:01:59 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        void makeSound() const;
        Cat();
        virtual ~Cat();
    Cat(const Cat &other); //copy constructor
    Cat &operator=(const Cat &other); //copy assignment operator
};

#endif
