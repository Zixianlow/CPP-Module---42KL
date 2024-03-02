/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:44:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/03 17:19:02 by lzi-xian         ###   ########.fr       */
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
	Animal(const Animal &copy);
	Animal& operator=(const Animal &copy);
	virtual ~Animal();
	
	Animal(std::string type);
	std::string getType() const;
	virtual void	makeSound() const;
};

class Cat : public Animal{
public:
	Cat();
    Cat(const Cat &copy);
	Cat& operator=(const Cat &copy);
	~Cat();

	void	makeSound() const;
};


#endif
