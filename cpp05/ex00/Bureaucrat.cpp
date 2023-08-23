/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:26:49 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/19 20:51:44 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat::Bureaucrat(std::string name){
	this->name = name;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy){
	if (this != &copy){
		this->name = copy.name;
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
		throw Bureaucrat::GradeTooHigh();
	grade--;
}

void	Bureaucrat::gradeDecrement(){
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLow();
	grade++;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& copy){
	stream << copy.getName() << ", bureaucrat grade " << copy.getGrade();
	return stream;
}