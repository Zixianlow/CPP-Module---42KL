/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:25:10 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/05 20:44:32 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat class is constructed." << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat class is destructed." << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const
{
	std::cout << "Animal making sound, Meowwww~~~" << std::endl;
}
