/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 19:07:31 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/22 19:14:18 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string input;
	Harl harl;

	while (input.compare("exit"))
	{
		std::cout << "Select a level: ";
		std::cin >> input;
		harl.complain(input);
	}
	return 0;
}
