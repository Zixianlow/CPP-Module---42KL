/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:58:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/22 16:35:36 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), target(target){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy){
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (this->getSigned() != true){
		throw Form::FormNotSigned();
	}
	if (executor.getGrade() > this->getGradeExecute()){
		throw Form::GradeTooLow();
	}
}