/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:55:02 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/28 21:10:30 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "A wild ClapTrap " << name << " spawned." << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " vanished."  << std::endl;
}
	
void	ClapTrap::attack(const std::string& target)
{
	if (this->hp == 0)
		return ;
	if (this->energy <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy.";
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks ";
	std::cout << target << ", causing " << this->dmg;
	std::cout << " points of damage!";
	std::cout << std::endl;
	this->energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead.";
		std::cout << std::endl;
		return ;
	}
	if (this->hp <= amount)
	{
		std::cout << "ClapTrap " << this->name << " could not handle ";
		std::cout << amount << " damage, " << this->name << " is dead.";
		std::cout << std::endl;
		this->hp = amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " takes ";
		std::cout << amount << " damage!!! ";
		std::cout << std::endl;
	}
	this->hp -= amount;
}
	
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp == 0)
		return ;
	if (this->energy == 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy.";
		return ;
	}
	std::cout << "ClapTrap " << this->name << " repairs itself, ";
	std::cout << " recovered " << amount << " of hit points.";
	std::cout << std::endl;
	this->energy--;
	this->hp += amount;
}
