/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:55:19 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/23 11:54:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

# include <iostream> // To use cout
# include <cctype>


class Animal
{
    protected:
        std::string type;
    public:
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const;
        
        Animal();
        virtual ~Animal();
        Animal(const Animal &other); //copy constructor
        Animal &operator=(const Animal &other); //copy assignment operator
};

#endif