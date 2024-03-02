/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:02:17 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/17 12:53:29 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
protected:
	std::string 	name;
	bool			sign;
	const int		gradeSign;
	const int		gradeExecute;
public:
	Form(std::string name, int gradeSign, int gradeExecute);
	Form(const Form &copy);
	Form& operator=(const Form &copy);
	~Form();
	
	std::string getName() const;
	bool	getSigned() const;
	int	getGradeSign() const;
	int	getGradeExecute() const;

	void	beSigned(const Bureaucrat &copy);
	
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

std::ostream& operator<<(std::ostream& stream, const Form& form);

#endif
