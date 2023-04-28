/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:02:13 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/27 18:37:33 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPointValue = 0;
}

Fixed::Fixed(const int n)
{
	this->fixedPointValue = n << fractionalBitsValue;
}

Fixed::Fixed(const float n)
{
	this->fixedPointValue = std::roundf(n * (1 << fractionalBitsValue));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	if (this != &copy)
		this->fixedPointValue = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

bool	Fixed::operator>(const Fixed &copy) const
{
	return this->getRawBits() > copy.getRawBits();
}

bool	Fixed::operator<(const Fixed &copy) const
{
	return this->getRawBits() < copy.getRawBits();
}

bool	Fixed::operator>=(const Fixed &copy) const
{
	return this->getRawBits() >= copy.getRawBits();
}

bool	Fixed::operator<=(const Fixed &copy) const
{
	return this->getRawBits() <= copy.getRawBits();
}

bool	Fixed::operator==(const Fixed &copy) const
{
	return this->getRawBits() == copy.getRawBits();
}

bool	Fixed::operator!=(const Fixed &copy) const
{
	return this->getRawBits() != copy.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &copy) const
{
	return Fixed (this->toFloat() + copy.toFloat());
}

Fixed	Fixed::operator-(const Fixed &copy) const
{
	return Fixed (this->toFloat() - copy.toFloat());
}

Fixed	Fixed::operator*(const Fixed &copy) const
{
	return Fixed (this->toFloat() * copy.toFloat());
}

Fixed	Fixed::operator/(const Fixed &copy) const
{
	return Fixed (this->toFloat() / copy.toFloat());
}

Fixed&	Fixed::operator++(void)
{
	this->fixedPointValue++;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	this->fixedPointValue++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	temp.fixedPointValue = this->fixedPointValue++;
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	temp.fixedPointValue = this->fixedPointValue--;
	return temp;
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

Fixed&	Fixed::min(Fixed &a, Fixed&b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed &a, Fixed&b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed&b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed&b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream& operator<<(std::ostream&stream, const Fixed& copy)
{
	stream << copy.toFloat();
	return stream;
}
