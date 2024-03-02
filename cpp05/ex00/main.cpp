/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:42:09 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/17 12:49:32 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureau("Bur", 0);
		std::cout << bureau << std::endl;
		bureau.gradeIncrement();
	}
	catch (Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----------------------------------" << std::endl;
	try {
        Bureaucrat bureau("Bureau", 1);
		std::cout << bureau << std::endl;
		bureau.gradeIncrement();
	}
	catch (Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----------------------------------" << std::endl;
	try {
        Bureaucrat crat("Cr", 151);
		std::cout << crat << std::endl;
		crat.gradeDecrement();
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----------------------------------" << std::endl;
    try {
        Bureaucrat crat("Crat", 150);
		std::cout << crat << std::endl;
		crat.gradeDecrement();
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
}
