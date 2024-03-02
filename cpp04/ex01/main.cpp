/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:43:19 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/03 15:46:47 by lzi-xian         ###   ########.fr       */
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
    
    const Cat* k = new Cat();
    const Cat l(*k);
    const Cat m = *k;
    std::cout << k->getBrain()->getIdeas(2) << std::endl;
    k->getBrain()->setIdeas(2, "random thought");
    std::cout << k->getBrain()->getIdeas(2) << std::endl;
    std::cout << m.getBrain()->getIdeas(2) << std::endl;
    std::cout << l.getBrain()->getIdeas(2) << std::endl;
    delete k;
    
    std::cout << "------------------------------" << std::endl;
    
    Dog basic;
    {
        Dog tmp = basic;
        std::cout << basic.getBrain()->getIdeas(2) << std::endl;
        basic.getBrain()->setIdeas(2, "random thought");
        std::cout << basic.getBrain()->getIdeas(2) << std::endl;
        std::cout << tmp.getBrain()->getIdeas(2) << std::endl;
    }
    return 0;
}
