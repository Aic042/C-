/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:11:53 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/07 11:34:19 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cctype>
# include <exception>
# include <cmath>     // round
# include <cstdlib>   // exit
# include <sstream>
# include <iostream>
# include <string>

class Base
{
	public:
		virtual ~Base();
};

class Base_A : Base
{
	
};

class Base_B : Base
{
	
};

class Base_C : Base
{
	
};


        // Base *generate(void);  
        // void identify(Base* p);  
        // //It prints the actual type of the object pointed to by p: "A", "B", or "C".
        
        // void identify(Base& p);  
        // //It prints the actual type of the object referenced by p: "A", "B", or "C". Using a pointer

#endif