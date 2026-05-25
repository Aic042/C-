/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:49:03 by root              #+#    #+#             */
/*   Updated: 2026/05/25 21:54:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        std::string getType() const;
        void setType(std::string type);
    public:
        void makeSound() const;
        Cat();
        virtual ~Cat();
        Cat(const Cat &other); //copy constructor
        Cat &operator=(const Cat &other); //copy assignment operator
};

#endif
