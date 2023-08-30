/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:36:27 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 17:18:24 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137), target("_shrubbery"){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137), target(strcat((char *)target.c_str(),"_shrubbery")){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy){
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
	if (this != &copy){
		this->target = copy.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (this->getSigned() != true){
		throw Form::FormNotSigned();
	}
	if (executor.getGrade() > this->getGradeExecute()){
		throw Form::GradeTooLow();
	}
}

void	ShrubberyCreationForm::action() const{
	std::ofstream outfile(target);
	if (!outfile)
	{
		std::cout << "Invalid outfile!!!" << std::endl;
		return ;
	}
	outfile << "       ###\n"
	"      #o###\n"
	"    #####o###\n"
	"   #o#\\#|#/###\n"
	"    ###\\|/#o#\n"
	"     # }|{  #\n"
	"       }|{\n" << std::endl;
	outfile.close();
}
