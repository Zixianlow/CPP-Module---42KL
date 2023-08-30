/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:55:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/26 19:17:18 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

class CantFind : public std::exception{
	public:
	virtual const char* what() const throw()
	{
		return "Target found in container: ";
	}
};

template<typename T>
int easyfind(T vec, int n){
	typename T::iterator it;
	
	try{
		it = std::find(vec.begin(), vec.end(), n);
		if (it == vec.end())
			throw CantFind();
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
	return (*it);	
}

#endif
