/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:25:10 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/01/25 18:05:53 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat class is constructed." << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat class is copy constructed." << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat class is destructed." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Animal making sound, Meowwww~~~" << std::endl;
}
