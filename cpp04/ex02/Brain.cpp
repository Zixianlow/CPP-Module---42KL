/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:22:43 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/03 15:15:51 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while (i < 100){
        this->ideas[i] = "This is a random idea " + std::to_string(i) + ".";
        i++;
    }
	std::cout << "A Brain is constructed." << std::endl;
}

Brain::~Brain()
{
	std::cout << "A Brain is destructed." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "A Brain is copy constructed" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain &copy)
{
	int i;

	i = 0;
	std::cout << "Brain copy assignment called." << std::endl;
	if (this != &copy)
	{
		while (i < 100)
		{
			this->ideas[i] = copy.ideas[i];
			i++;
		}
	}
	return *this;
}
