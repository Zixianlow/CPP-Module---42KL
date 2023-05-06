/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:25:10 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/06 13:57:19 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat class is constructed." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class is destructed." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Animal making sound, Woooof~~~" << std::endl;
}
