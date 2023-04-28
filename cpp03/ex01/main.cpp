/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:54:36 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/28 21:19:15 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap scav("Scav");

    scav.attack("Dummy");
    scav.takeDamage(30);
    scav.beRepaired(10);
	scav.guardGate();
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.beRepaired(10);
    scav.guardGate();

    return 0;
}
