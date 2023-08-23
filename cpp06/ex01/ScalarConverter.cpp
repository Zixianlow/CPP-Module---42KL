/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:26:49 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/23 18:52:07 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string string){
	int i;
	
	try{
		i = stoi(string);
		std::cout << "char: ";
		if (isprint(i))
			std::cout << "'" << (char)i << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch(std::out_of_range &e){
		std::cout << "char : impossible" << std::endl;
	}
	catch(std::invalid_argument &e){
		std::cout << "char : impossible" << std::endl;
	}
	try{
		i = stoi(string);
		std::cout << "int: " << i << std::endl;
	}
	catch(std::out_of_range &e){
		std::cout << "int : impossible" << std::endl;
	}
	catch(std::invalid_argument &e){
		std::cout << "int : impossible" << std::endl;
	}
	try{
		float f = stof(string);
		std::cout << "float: " << (float)f << "f" << std::endl;
	}
	catch(std::invalid_argument &e){
		std::cout << "double : impossible" << std::endl;
	}
	try{
		double d = stod(string);
		std::cout << "double: "<< (double)d << std::endl;
	}
	catch(std::invalid_argument &e){
		std::cout << "double : impossible" << std::endl;
	}
}
