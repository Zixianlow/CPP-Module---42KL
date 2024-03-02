/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:11:18 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/01/25 16:19:11 by lzi-xian         ###   ########.fr       */
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

FragTrap::FragTrap()
{
	std::cout << "A wild nameless ScavTrap spawned." << std::endl;
	this->name = "nameless";
	this->hp = 10;
	this->energy = 10;
	this->dmg = 0;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->hp = copy.hp;
		this->energy = copy.energy;
		this->dmg = copy.dmg;
	}
	return *this;
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
