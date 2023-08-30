/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:42:09 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 16:26:52 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureau("Bureau", 1);
	Bureaucrat crat("Crat", 150);

	try {
		std::cout << bureau << std::endl;
		bureau.gradeIncrement();
	}
	catch (Bureaucrat::GradeTooHigh &e){
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::cout << crat << std::endl;
		crat.gradeDecrement();
	}
	catch (Bureaucrat::GradeTooLow &e){
		std::cout << e.what() << std::endl;
	}
}
