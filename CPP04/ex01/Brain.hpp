/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 23:23:22 by root              #+#    #+#             */
/*   Updated: 2026/05/26 12:52:10 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &other); //copy constructor
		Brain &operator=(const Brain &other); //copy assignment operator
		~Brain();
		
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};


#endif
