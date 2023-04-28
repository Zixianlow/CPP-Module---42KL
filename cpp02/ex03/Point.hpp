/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:36:48 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/27 18:16:36 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
private:
	const Fixed	x;
	const Fixed	y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &copy);
	Point& operator=(const Point &rhs);
	~Point();

	Fixed getX(void) const;
	Fixed getY(void) const;
};

#endif
