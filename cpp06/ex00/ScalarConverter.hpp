/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:23:07 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/03/02 17:09:06 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>

class ScalarConverter{
public:
    ScalarConverter() {};
	ScalarConverter(const ScalarConverter &copy) {*this = copy;};
	ScalarConverter& operator=(const ScalarConverter &copy) {return *this;};
	~ScalarConverter() {};
    
	static void convert(std::string str);
};

#endif
