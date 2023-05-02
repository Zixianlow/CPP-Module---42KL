/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:52:37 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/28 21:13:09 by lzi-xian         ###   ########.fr       */
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " vanished."  << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->hp == 0)
		return ;
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode."  << std::endl;
}
