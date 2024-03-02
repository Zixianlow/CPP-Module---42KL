/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:52:37 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/01/25 16:16:52 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->energy = 50;
	this->dmg = 20;

	std::cout << "A wild ScavTrap " << this->name << " spawned." << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "A wild nameless ScavTrap spawned." << std::endl;
	this->name = "nameless";
	this->hp = 10;
	this->energy = 10;
	this->dmg = 0;
}


ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " vanished."  << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hp == 0)
		return ;
	if (this->energy <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is out of energy.";
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks ";
	std::cout << target << ", causing " << this->dmg;
	std::cout << " points of damage!";
	std::cout << std::endl;
	this->energy--;
}

void	ScavTrap::guardGate()
{
	if (this->hp == 0)
		return ;
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode."  << std::endl;
}

