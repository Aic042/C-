/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:54:41 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/26 18:10:53 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "Required leak test" << std::endl;
    std::cout << std::endl;

    const Animal* a = new Dog();
    const Animal* b = new Cat();
    std::cout << std::endl;
    
    delete a;//should not create a leak
    delete b;
    std::cout << std::endl;
    std::cout << "Required leak test is over" << std::endl;
    std::cout << std::endl;
    
    const int size = 3;
    Animal* animals[size];
    int i = 0;

    while (i < size)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }
    std::cout << std::endl;
    i = 0;
    while (i < size)
    {
        animals[i]->makeSound();
        i++;
    }

    i = 0;
    while (i < size)
    {
        delete animals[i];
        i++;
    }
    std::cout << std::endl;

    std::cout << "\n=== Test Deep Copy ===\n";
    Dog basic;
    std::cout << std::endl;
    
    basic.getBrain()->setIdea(0, "I love bones");
    Dog copy(basic);           // copy constructor
    std::cout << std::endl;
    
    std::cout << "Basic idea[0]: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << std::endl;

    copy.getBrain()->setIdea(0, "I love cats instead");
    std::cout << "After modification:\n";
    std::cout << "Basic idea[0]: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << std::endl;

    return 0;
}
