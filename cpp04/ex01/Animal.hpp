/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:44:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/06 15:43:44 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
protected:
	std::string 	type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &copy);
	Animal& operator=(const Animal &copy);
	virtual ~Animal();
	
	std::string getType() const;
	virtual void	makeSound() const;
};

#endif
