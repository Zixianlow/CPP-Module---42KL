/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:26:49 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/17 20:02:39 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){
}

Base* generate(void){
    std::srand(std::time(0));
	int i = std::rand() % 3;
	
	if (i == 0){
		std::cout << "New Base A created." << std::endl;
		return new A;
	}
	if (i == 1){
		std::cout << "New Base B created." << std::endl;
		return new B;
	}
	if (i == 2){
		std::cout << "New Base C created." << std::endl;
		return new C;
	}
	return NULL;
}

void identity(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "Base A identified." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Base B identified." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Base C identified." << std::endl;
	else
		std::cout << "Cannot identify Base." << std::endl;
}

void identity(Base& p){
	if (dynamic_cast<A*>(&p))
		std::cout << "Base A identified." << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "Base B identified." << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Base C identified." << std::endl;
	else
		std::cout << "Cannot identify Base." << std::endl;
}
