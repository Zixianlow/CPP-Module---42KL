/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:02:13 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/27 18:25:00 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = n << fractionalBitsValue;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = std::roundf(n * (1 << fractionalBitsValue));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->fixedPointValue = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->fixedPointValue / (1 << fractionalBitsValue);
}

int Fixed::toInt(void) const
{
	return (int)this->fixedPointValue >> fractionalBitsValue;
}

std::ostream& operator<<(std::ostream&stream, const Fixed& copy)
{
	stream << copy.toFloat();
	return stream;
}
