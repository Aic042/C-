/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:55:51 by root              #+#    #+#             */
/*   Updated: 2026/10/18 18:14:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


// identifier
// necesitamos un RTTI (run time type information) para saber que tipo de obj el obj es
void identify(Base* p)
{
    if(!p)
        return;
    if(dynamic_cast<Base_A*>(p))
        std::cout << "A" << std::endl;
    if(dynamic_cast<Base_B*>(p))
        std::cout << "B" << std::endl;
    if(dynamic_cast<Base_C*>(p))
        std::cout << "C" << std::endl;
}

Base *generate( ) // asi generamos un Base aleatorio
{
    int random_num = 0;
    random_num = rand() % 3;
    if(random_num == 0)
        return new Base_A;
    if(random_num == 1)
        return new Base_B;
    // if(random_num == 2)
    else
        return new Base_C;
}

void identify(Base& p)
{
    try
    {
        dynamic_cast<Base_A&>(p); //si no es A, nos vamos al catch
        std::cout << "Identify() identified Base_A" << std::endl;
        return;
    }
    catch (std::exception &e) 
    {
        std::cout << "Identify() failed to identify Base_A" << std::endl;
    }
    try
    {
        dynamic_cast<Base_B&>(p); //si no es B, nos vamos al catch
        std::cout << "Identify() identified Base_B" << std::endl;
        return;
    }
    catch (std::exception &e) 
    {
        std::cout << "Identify() failed to identify Base_B" << std::endl;
    }
    try
    {
        dynamic_cast<Base_C&>(p); //si no es C, nos vamos al catch
        std::cout << "Identify() identified Base_C" << std::endl;
        return;
    }
    catch (std::exception &e) 
    {
        std::cout << "Identify() failed to identify Base_C" << std::endl;
    }    
}

int main()
{
	srand(time(NULL));
	Base *ptr = generate();
	Base &ref = *ptr;
	identify(ptr); //identificamos el ptr
	identify(ref); //identificamos la ref

	delete ptr;
	return 0;
}