/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:55:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/03/02 18:10:36 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{
private:
	T* array;
	unsigned int s;
public:
	Array();
	Array(unsigned int n);
	Array(const Array &copy);
	Array& operator=(const Array &copy);
	~Array();
	
	unsigned int	size() const;
	T& operator[](unsigned int index);
	
	class IndexOutOfBound : public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{
				return "Index is out of bound!!!";
			}
	};
};

#endif
