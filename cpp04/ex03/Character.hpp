/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:56:26 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/05/10 21:05:35 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character{
private:
	std::string name;
	AMateria *inventor[4];
public:
	Character();
	~Character();
	Character(Character const & copy);
	Character& operator=(Character const & copy);
	
	void	equip(AMateria* mat);
	void	unequip(int i);
	void	use(int i, ICharacter &target);
	std::string const & getName() const;
};

#endif
