/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:12:04 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/22 15:11:19 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->setType(name);
}

Weapon::~Weapon(void)
{
}

std::string	Weapon::showName(void)
{
	return this->name;
}

void	Weapon::setType(std::string name)
{
	this->name = name;
}
