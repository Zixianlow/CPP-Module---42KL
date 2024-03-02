/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:28:21 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/03 16:52:41 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
    Brain *brain;
public:
	Dog();
    Dog(const Dog &copy);
	Dog& operator=(const Dog &copy);
	~Dog();

	void	makeSound() const;
    Brain* getBrain() const { return this->brain; } 
};

#endif
