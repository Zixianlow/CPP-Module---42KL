/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:01:11 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/01/16 17:23:05 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main ( void ) {
    if ( bsp( Point(0, 0), Point(0, 20), Point(20, 0), Point(1, 1) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
    if ( bsp( Point(0, 0), Point(0, 20), Point(20, 0), Point(0, 10) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
    if ( bsp( Point(0, 0), Point(0, 20), Point(20, 0), Point(0, 0) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
}
