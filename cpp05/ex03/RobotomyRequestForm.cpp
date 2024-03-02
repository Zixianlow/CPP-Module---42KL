/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:58:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/17 13:23:51 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45), target(""){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), target(target){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy){
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){
	if (this != &copy){
		this->target = copy.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (this->getSigned() != true){
		throw Form::FormNotSigned();
	}
	if (executor.getGrade() > this->getGradeExecute()){
		throw Form::GradeTooLowException();
	}
}

void	RobotomyRequestForm::action() const{
	int	i;

	srand(time(NULL));
	i = rand() % 2;
    std::cout << "This is a recording of drilling noises!!!" << std::endl;
	if (i){
		std::cout << "This is a recording of drilling noises!!!" << std::endl;
	}
	else{
		std::cout << "Robotomy on " << this->target << " failed." << std::endl;
	}
}
