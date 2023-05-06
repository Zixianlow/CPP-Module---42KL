/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:09:14 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/06 13:42:40 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal class is constructed." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal class is constructed." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal class is copy constructed." << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal class is destructed." << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal making sound, nahh no one was there." <<  std::endl;
}
