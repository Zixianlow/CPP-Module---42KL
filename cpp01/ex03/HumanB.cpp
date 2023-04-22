/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:16:26 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/22 15:11:40 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (this->weapon != NULL && this->weapon->showName() != "")
	{
		std::cout << this->name << " attacks with their ";
		std::cout << this->weapon->showName();
		std::cout << std::endl;
	}
	else
	{
		std::cout << this->name << " have to attack with fist";
		std::cout << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
