/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:01:11 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/01/16 17:10:47 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "--------------------------------------" << std::endl;
    Fixed q(0.02f);
    Fixed w(-2);
    Fixed e(0);
    Fixed f(0);
    if (q > w)
        std::cout << "q > w" << std::endl;
    if (w > q)
        std::cout << "w > q" << std::endl;
    if (q < w)
        std::cout << "q < w" << std::endl;
    if (w < q)
        std::cout << "w < q" << std::endl;
    if (q >= e)
        std::cout << "q >= e" << std::endl;
    if (w >= e)
        std::cout << "w >= e" << std::endl;
    if (e >= f)
        std::cout << "e >= f" << std::endl;
    if (q <= e)
        std::cout << "q <= e" << std::endl;
    if (w <= e)
        std::cout << "w <= e" << std::endl;
    if (e <= f)
        std::cout << "e <= f" << std::endl;
    if (e == f)
        std::cout << "e == f" << std::endl;
    if (e == w)
        std::cout << "e == w" << std::endl;
    if (e != f)
        std::cout << "e != f" << std::endl;
    if (e != w)
        std::cout << "e != w" << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << q + w << std::endl;
    std::cout << q - w << std::endl;
    std::cout << q * e << std::endl;
    std::cout << q / e << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << q << std::endl;
    std::cout << q++ << std::endl;
    std::cout << q << std::endl;
    std::cout << ++q << std::endl;
    std::cout << q << std::endl;
    return (0);
}
