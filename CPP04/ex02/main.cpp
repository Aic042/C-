/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:54:41 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/26 18:02:13 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // Animal a; se hace imposible porque es puramente virtual ;D
    std::cout << std::endl;
    std::cout << j->getType() << ": ";
    j->makeSound();

    std::cout << i->getType() << ": ";
    i->makeSound();
    std::cout << std::endl;

    delete j;
    delete i;

    return 0;
}