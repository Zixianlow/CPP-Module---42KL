/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:54:36 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/01/16 19:23:26 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Clap");

    clap.attack("Dummy");
	clap.takeDamage(2);
	clap.takeDamage(2);
	clap.takeDamage(2);
	clap.beRepaired(2);
	clap.takeDamage(2);
	clap.takeDamage(2);
	clap.takeDamage(2);
	clap.beRepaired(2);
    clap.attack("Dummy");
	clap.beRepaired(2);
    std::cout << "--------------------------------------" << std::endl;
    ClapTrap clap2("Clap2");
    clap2.attack("Dummy");
    clap2.takeDamage(3);
    clap2.beRepaired(3);
    clap2.attack("Dummy");
    clap2.takeDamage(3);
    clap2.beRepaired(3);
    clap2.attack("Dummy");
    clap2.takeDamage(3);
    clap2.beRepaired(3);
    clap2.attack("Dummy");
    clap2.takeDamage(3);
    clap2.beRepaired(3);
    clap2.attack("Dummy");
    clap2.takeDamage(3);
    clap2.beRepaired(3);
    clap2.attack("Dummy");
    clap2.takeDamage(3);
    clap2.beRepaired(3);
    clap2.attack("Dummy");
    clap2.takeDamage(3);
    clap2.beRepaired(3);
    return 0;
}
