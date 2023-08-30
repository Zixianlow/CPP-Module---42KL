/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:55:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/25 16:06:18 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T &min(T &a, T &b){
	if (a < b)
		return a;
	return b;
}

template <typename T>
T &max(T &a, T &b){
	if (a > b)
		return a;
	return b;
}

#endif
