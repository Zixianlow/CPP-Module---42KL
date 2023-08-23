/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:42:09 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/23 15:19:24 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat bureau("bureau", 55);
	ShrubberyCreationForm Shrubbery("Home");
	PresidentialPardonForm Presidential("Home");
	RobotomyRequestForm Robotomy("Home");
	Form* form;

	form = &Shrubbery;
	std::cout << *form << std::endl;
	std::cout << Shrubbery << std::endl;
	std::cout << Robotomy << std::endl;
	std::cout << Presidential << std::endl;
	try{
		bureau.signForm(Shrubbery);
		bureau.executeForm(Shrubbery);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		bureau.signForm(Robotomy);
		bureau.executeForm(Robotomy);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		bureau.executeForm(Presidential);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}