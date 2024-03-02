/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:14 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/01/25 18:08:44 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog class is constructed." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog class is copy constructed." << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog class is destructed." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Animal making sound, Wooooof~~~" << std::endl;
}
