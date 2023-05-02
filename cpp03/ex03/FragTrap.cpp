/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:11:18 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/28 21:15:37 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->energy = 100;
	this->dmg = 30;

	std::cout << "A wild FragTrap " << this->name << " spawned." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " vanished."  << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hp == 0)
		return ;
	std::cout << "FragTrap " << this->name << " gives very positive high fives to all guys."  << std::endl;
}
