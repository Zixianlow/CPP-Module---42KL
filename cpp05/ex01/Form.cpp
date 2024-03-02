/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:01:33 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/17 13:01:31 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute) : name(name), sign(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1){
		throw Form::GradeTooHighException();
	}
	if (gradeSign > 150 || gradeExecute > 150){
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form &copy) : name(copy.getName()), gradeSign(copy.getGradeSign()), gradeExecute(copy.getGradeExecute())
{
	*this = copy;
}

Form& Form::operator=(const Form &copy){
	if (this != &copy){
		this->name = copy.name;
	}
	return *this;
}

Form::~Form(){
}

std::string Form::getName() const{
	return name;
}

bool	Form::getSigned() const{
	return sign;
}

int	Form::getGradeSign() const{
	return gradeSign;
}

int	Form::getGradeExecute() const{
	return gradeExecute;
}

void	Form::beSigned(const Bureaucrat &copy){
	if (copy.getGrade() > gradeSign){
		throw Form::GradeTooLowException();
	}
	sign = true;
}

std::ostream& operator<<(std::ostream& stream, const Form& form){
	stream << form.getName() << ", form sign grade " << form.getGradeSign() << ", form execute grade " << form.getGradeExecute();
	return stream;
}
