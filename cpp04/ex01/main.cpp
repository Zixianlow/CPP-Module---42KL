/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:43:19 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/06 15:37:37 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;

	std::cout << "------------------------------" << std::endl;
	const Animal* arr[4]; 
	arr[0] = new Cat();
	arr[1] = new Cat();
	arr[2] = new Dog();
	arr[3] = new Dog();
	delete arr[0];
	delete arr[1];
	delete arr[2];
	delete arr[3];
	return 0;
}
