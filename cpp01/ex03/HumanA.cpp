/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:16:46 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/05 18:16:31 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	if (this->weapon->showName() != "")
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
