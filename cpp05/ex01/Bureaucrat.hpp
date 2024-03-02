/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:23:07 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/17 12:56:51 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
protected:
	std::string 	name;
	int				grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat& operator=(const Bureaucrat &copy);
	~Bureaucrat();
	
	std::string getName() const;
	int	getGrade() const;
    void	signForm(Form &form);

	void	gradeIncrement();
	void	gradeDecrement();

	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Grade too low!!!";
			}
	};

	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{
				return "Grade too high!!!";
			}
	};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& copy);

#endif
