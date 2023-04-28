/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:47:43 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/27 18:13:16 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Point.hpp"

// static Fixed	ft_abs(Fixed x)
// {
// 	if (x < 0)
// 		return x * -1;
// 	return x;
// }

// static Fixed	ft_area(Point const a, Point const b, Point const c)
// {
// 	Fixed ax = a.getX();
// 	Fixed ay = a.getY();
// 	Fixed bx = b.getX();
// 	Fixed by = b.getY();
// 	Fixed cx = c.getX();
// 	Fixed cy = c.getY();
// 	return ((ax * (by - cy)) + (bx * (cy - ay)) + (cx * (ay - by))) / 2;
// }

// bool bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed abcArea = ft_abs(ft_area(a, b, c));
// 	Fixed pabArea = ft_abs(ft_area(point, a, b));
// 	Fixed pacArea = ft_abs(ft_area(point, a, c));
// 	Fixed pbcArea = ft_abs(ft_area(point, b, c));
	
// 	if (abcArea == pabArea + pacArea + pbcArea)
// 		return true;
// 	return false;
// }
