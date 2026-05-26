/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:54:41 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/26 17:51:29 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Test Polymorphism Correct ===\n";
    const Animal* base_animal = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << std::endl;

    i->makeSound();  // Meow must be printed
    j->makeSound();  // Woof must be printed
    base_animal->makeSound();
    std::cout << std::endl;
    
    delete base_animal;
    delete j;
    delete i;

    std::cout << "\n=== Test Wrong (Without Polymorphism) ===\n";
    const WrongAnimal* wrong_base_animal = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat();
    std::cout << std::endl;

    std::cout << wrong_i->getType() << std::endl;
    wrong_i->makeSound();   // Must output wrong animal sound!
    std::cout << std::endl;

    delete wrong_base_animal;
    delete wrong_i;

    return 0;
}