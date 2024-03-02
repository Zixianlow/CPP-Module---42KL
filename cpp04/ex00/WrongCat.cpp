/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:25:10 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/01/25 18:10:06 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat class is constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat class is copy constructed." << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class is destructed." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Animal making sound, Woooof~~~" << std::endl;
}
