/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:26:49 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/03/02 17:16:58 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str){
	int i;
	int l;
	char *s;
	int dot;
	int err;
	int a;
	
	i = 0;
	dot = 0;
	err = 0;
	a = 0;
	s = (char *)str.c_str();
	l = str.length();
    if (!str.compare("nan") || !str.compare("nanf")){
        std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
        return ;
    }
	else if (!str.compare("-inf") || !str.compare("-inff")){
        std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
        return ;
    }
	else if (!str.compare("+inf") || !str.compare("+inff")){
        std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
        std::cout << "float : +inff" << std::endl;
        std::cout << "double : +inf" << std::endl;
        return ;
    }
	while (i < l){
		if ((i == 0 && s[i] == '+') || s[i] == '-'){
			i++;
			a++;
		}
		if (i == 0 && s[i] == '.'){
			err++;
		}
		if (i > l)
			break ;
		if (!isdigit(s[i])){
			if (i == l - 1 && s[i] == 'f')
				break ;
			if (s[i] == '.')
				dot++;
			else
				err++;
		}
		i++;
	}
	if (dot > 1 || err > 0)
	{
		std::cout << "Invalid argument!!!" << std::endl;
		return ;
	}
	l -= a;
	try{
		i = stoi(str);
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
		i = stoi(str);
		std::cout << "int: " << i << std::endl;
	}
	catch(std::out_of_range &e){
		std::cout << "int : impossible" << std::endl;
	}
	catch(std::invalid_argument &e){
		std::cout << "int : impossible" << std::endl;
	}
	try{
		float f = stof(str);
		std::cout << "float: " << (float)f;
		if (dot == 0 && l < 7)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(std::invalid_argument &e){
		std::cout << "double : impossible" << std::endl;
	}
	try{
		double d = stod(str);
		std::cout << "double: "<< (double)d;
		if (dot == 0 && l < 7)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(std::invalid_argument &e){
		std::cout << "double : impossible" << std::endl;
	}
}
