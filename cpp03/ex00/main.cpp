/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:54:36 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/28 21:04:52 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Clap");

    clap.attack("Dummy");
	clap.takeDamage(3);
	clap.takeDamage(3);
	clap.takeDamage(3);
	clap.beRepaired(3);
	clap.takeDamage(3);
	clap.takeDamage(3);
	clap.takeDamage(3);
	clap.beRepaired(3);

    return 0;
}
