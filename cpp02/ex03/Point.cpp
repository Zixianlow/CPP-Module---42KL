/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:36:50 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/27 18:20:41 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{	
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
}

Point& Point::operator=(const Point &copy)
{
	if (this != &copy)
	{
		(Fixed)this->x = copy.getX();
		(Fixed)this->y = copy.getY();
	}
	return *this;
}

Point::~Point()
{
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}
