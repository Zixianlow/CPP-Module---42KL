/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:14 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/03 16:53:32 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
	std::cout << "Dog class is constructed." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog class is copy constructed." << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog &copy)
{
	std::cout << "Dog class is operator copy." << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
        this->brain = new Brain();
        int i = 0;
        while (i < 100)
		{
			this->brain->setIdeas(i, copy.brain->getIdeas(i));
			i++;
		}
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
