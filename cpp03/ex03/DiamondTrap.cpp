/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:39:22 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/02 20:52:37 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	this->name = name + "_clap_name";
	
	FragTrap::hp = 100;
	ScavTrap::energy = 50;
	FragTrap::dmg = 30;
	std::cout << "A wild DiamondTrap " << this->name << " spawned." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " vanished."  << std::endl;
}
	
void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am DiamondTrap " << this->name << "." << std::endl;
}
