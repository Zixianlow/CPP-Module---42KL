/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:00:41 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 17:19:25 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5), target(""){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", 25, 5), target(target){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy){
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){
	if (this != &copy){
		this->target = copy.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (this->getSigned() != true)
	{
		throw Form::FormNotSigned();
	}
	if (executor.getGrade() > this->getGradeExecute())
	{
		throw Form::GradeTooLow();
	}	
}

void	PresidentialPardonForm::action() const{
	std::cout << "This informs that " << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
