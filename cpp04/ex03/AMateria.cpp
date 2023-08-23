/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:59:33 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/10 20:08:29 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Amateria";
	std::cout << "Amateria " << this->type << " is constructed." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Amateria " << this->type << " is destructed." << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "Amateria " << this->type << " is constructed." << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria &copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria* AMateria::clone() const
{
	return (AMateria*)this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Amateria " << this->type << " is used on ";
	std::cout << target.getName() << "." << std::endl;
}
