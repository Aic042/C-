/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:54:00 by root              #+#    #+#             */
/*   Updated: 2026/05/25 21:58:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        std::string getType() const;
        void setType(std::string type);
    public:
        WrongCat();
        WrongCat(const WrongCat &other); //copy constructor
        WrongCat &operator=(const WrongCat &other); //copy assignment operator
        ~WrongCat();
    
        void makeSound() const;
};

#endif