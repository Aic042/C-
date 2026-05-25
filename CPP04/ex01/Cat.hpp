/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:49:03 by root              #+#    #+#             */
/*   Updated: 2026/05/25 22:29:57 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        void makeSound() const;
        Cat(std::string type);
        Cat();
        virtual ~Cat();
    Cat(const Cat &other); //copy constructor
    Cat &operator=(const Cat &other); //copy assignment operator
};

#endif
