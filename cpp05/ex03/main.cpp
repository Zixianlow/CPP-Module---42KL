/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:42:09 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 16:33:56 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	Form *form;
	
    try{
        form = intern.makeForm("shrubbery creation", "Shru");
        Bureaucrat b1("Bob", 136);
        Bureaucrat b2("Jhon", 145);
        b2.signForm(*form);
        b1.executeForm(*form);
        b2.executeForm(*form);
        delete form;
    }
	catch(std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try{
        form = intern.makeForm("robotomy request", "Robo");
        Bureaucrat b1("Bob2", 44);
        Bureaucrat b2("Jhon2", 72);
        b2.signForm(*form);
        b1.executeForm(*form);
        b2.executeForm(*form);
        delete form;
    }
	catch(std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try{
        form = intern.makeForm("presidential pardon", "Pres");
        Bureaucrat b1("Bob3", 5);
        Bureaucrat b2("Jhon3", 24);
        b2.signForm(*form);
        b1.executeForm(*form);
        b2.executeForm(*form);
        delete form;
    }
	catch(std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try{
        form = intern.makeForm("none existing", "None");
        Bureaucrat b1("Bob4", 5);
        Bureaucrat b2("Jhon4", 24);
        b2.signForm(*form);
        b1.executeForm(*form);
        b2.executeForm(*form);
        delete form;
    }
	catch(std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
