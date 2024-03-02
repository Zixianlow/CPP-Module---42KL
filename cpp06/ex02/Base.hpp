/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:23:07 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/03/02 17:42:31 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base{
public:
	virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base* generate(void);
void identity(Base* p);
void identity(Base& p);

#endif
