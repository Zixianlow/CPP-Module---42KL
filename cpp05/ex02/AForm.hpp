/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:02:17 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/22 16:25:13 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	std::string 	name;
	bool			sign;
	const int		gradeSign;
	const int		gradeExecute;
public:
	Form(std::string name, int gradeSign, int gradeExecute);
	Form(const Form &copy);
	Form& operator=(const Form &copy);
	virtual ~Form();
	
	std::string getName() const;
	bool	getSigned() const;
	int	getGradeSign() const;
	int	getGradeExecute() const;

	void	beSigned(const Bureaucrat &copy);
	virtual void execute(Bureaucrat const &executor) const = 0;
	
	class	GradeTooLow : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Grade too low!!!";
			}
	};

	class	GradeTooHigh : public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{
				return "Grade too high!!!";
			}
	};

	class	FormNotSigned : public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{
				return "Form not signed!!!";
			}
	};
};

std::ostream& operator<<(std::ostream& stream, const Form& form);

#endif
