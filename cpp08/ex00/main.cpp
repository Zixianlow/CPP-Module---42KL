/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:42:09 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/26 17:27:52 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main(int, char**)
{
	std::vector<int> numbers;

	numbers.push_back(0);
	numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
	std::cout << easyfind(numbers, 20) << std::endl;
	std::cout << easyfind(numbers, 40) << std::endl;
    return 0;
}
