/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:42:09 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/03/02 17:56:05 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T &s) 
{
    std::cout << s << ",";
}

template <typename T>
void decrement(T &n) 
{
    n--;
}


int main(void) 
{
    int array[] = {1, 2, 3, 4, 5};
	char name[] = {'b', 'c', 'd'};
	std::string strings[] = {"s1", "s2", "s3"};
	
	std::cout << "Initial value:" << std::endl;
	::iter(array, 5, print);
	std::cout << std::endl;
    ::iter(array, 3, decrement);
	std::cout << "After decrement:" << std::endl;
    ::iter(array, 5, print);
	std::cout << std::endl;
	std::cout << "Initial value:" << std::endl;
	::iter(name, 3, print);
	std::cout << std::endl;
    ::iter(name, 3, decrement);
	std::cout << "After decrement," << std::endl;
    ::iter(name, 3, print);
	std::cout << std::endl;
	std::cout << "The string array:" << std::endl;
	::iter(strings, 2, print);
	std::cout << std::endl;
}
