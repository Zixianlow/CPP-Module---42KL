/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:26:49 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/17 13:10:58 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat::Bureaucrat(std::string name){
	this->name = name;
    this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
	this->name = name;
	this->grade = grade;
    if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy){
	if (this != &copy){
		this->name = copy.name;
		this->grade = copy.grade;
	}
	return *this;
}
	
std::string Bureaucrat::getName() const{
	return name;
}

int	Bureaucrat::getGrade() const{
	return grade;
}

void	Bureaucrat::gradeIncrement(){
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void	Bureaucrat::gradeDecrement(){
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

void	Bureaucrat::signForm(Form &form){
	try{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException &e){
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	catch(Form::FormAlreadySign &e){
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form){
	try{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
		form.action();
	}
	catch(Form::GradeTooLowException &e){
		std::cout << this->getName() << " couldn't executed " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& copy){
	stream << copy.getName() << ", bureaucrat grade " << copy.getGrade();
	return stream;
}
