/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:14 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 17:13:16 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog class is constructed." << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog class is destructed." << std::endl;
	delete this->brain;
}

void	Dog::makeSound() const
{
	std::cout << "Animal making sound, Wooooof~~~" << std::endl;
}
