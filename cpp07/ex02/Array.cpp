/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:10:02 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/03/02 18:09:42 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CPP
#define ARRAY_CPP

#include "Array.hpp"

template<typename T>
Array<T>::Array() : s(0){
	this->array = new T[this->s];
}

template<typename T>
Array<T>::Array(unsigned int n) : s(n){
	this->array = new T[this->s];
}

template<typename T>
Array<T>::Array(const Array &copy){
	*this = copy;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &copy){
	if (copy.s)
		return *this;
	return *this;
}

template<typename T>
Array<T>::~Array(){

}

template<typename T>
unsigned int	Array<T>::size() const{
	return this->s;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= s) {
        throw IndexOutOfBound();
    }
    return array[index];
}

#endif
