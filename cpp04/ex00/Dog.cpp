/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:14 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/05 19:58:46 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog class is constructed." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog class is destructed." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Animal making sound, Wooooof~~~" << std::endl;
}