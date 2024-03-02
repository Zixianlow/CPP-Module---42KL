/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:14:02 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/03 15:00:18 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain *brain;
public:
	Cat();
    Cat(const Cat &copy);
	Cat& operator=(const Cat &copy);
	~Cat();

	void	makeSound() const;
    Brain* getBrain() const { return this->brain; } 
};

#endif
