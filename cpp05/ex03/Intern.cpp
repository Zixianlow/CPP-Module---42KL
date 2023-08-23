/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:26:59 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/23 17:08:49 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){
}

Intern::Intern(const Intern &copy){
	*this = copy;
}

Intern& Intern::operator=(const Intern &copy){
	return *this;
}

Intern::~Intern(){
}

Form*	Intern::makeForm(std::string name, std::string target){
	Form* form[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	std::string nameset[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	int	i = 0;
	while (i < 3){
		if (!name.compare(nameset[i])){
			std::cout << "Intern creats " << name << " form." << std::endl;
			return form[i];
		}
		i++;
	}
	throw Intern::NameNotExist();
}
