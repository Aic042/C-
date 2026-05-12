/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:55:19 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/12 20:10:55 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream> // To use cout
# include <cctype>

#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

class Animal
{
    protected:
        std::string type;
        std::string getType();
        void setType(std::string type);
    Animal();
    ~Animal();
};

class Dog : public Animal
{
    public:
        void makeSound();
};


class Cat : public Animal
{
    void makeSound();
};

class WrongAnimal
{
    protected:
        std::string type;
};

class WrongCat : public Animal
{
    void makeSound();
};

#endif