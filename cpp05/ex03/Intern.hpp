/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:26:57 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/23 16:57:18 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern{
public:
	Intern();
	Intern(const Intern &copy);
	Intern& operator=(const Intern &copy);
	~Intern();

	Form*	makeForm(std::string name, std::string target);
	
	class	NameNotExist : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Form name does not exsit!!!";
			}
	};
};

#endif
