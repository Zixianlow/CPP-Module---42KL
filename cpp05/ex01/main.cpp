/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:42:09 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/17 12:59:35 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
		Form form1("Form 1", 0, 123);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----------------------------------" << std::endl;
    try{
        Form form2("Form 2", 2, 151);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----------------------------------" << std::endl;
	Bureaucrat bureau("bureau", 2);
	Form form("Form A", 2, 123);
	std::cout << bureau << std::endl;
	std::cout << form << std::endl;
	try{
		bureau.signForm(form);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	bureau.gradeDecrement();
	try{
		bureau.signForm(form);
	}
	catch(std::exception &e){
	}
}
