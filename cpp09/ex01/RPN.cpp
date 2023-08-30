/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:46:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 17:27:59 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){
}

RPN::RPN(const RPN &copy){
	*this = copy;
}

RPN& RPN::operator=(const RPN &copy){
	if (this != &copy){
		this->number = copy.number;
	}
	return *this;
}

RPN::~RPN(){
}

void RPN::expression(std::string expression){
	int	i = 0;
	int l = expression.length();
	double res;

	while (i < l)
	{
		if (expression[i] == ' ')
			i++;
		if (i == l)
			break ;
		if (expression[i] >= '0' && expression[i] <= '9')
		{
			number.push(expression[i] - '0');
		}
		else if (expression[i] == '+' && number.size() >= 2)
		{
			res = number.top();
			number.pop();
			res += number.top();
			number.pop();
			number.push(res);
		}
		else if (expression[i] == '-' && number.size() >= 2)
		{
			res = number.top();
			number.pop();
			res = number.top() - res;
			number.pop();
			number.push(res);
		}
		else if (expression[i] == '*' && number.size() >= 2)
		{
			res = number.top();
			number.pop();
			res *= number.top();
			number.pop();
			number.push(res);
		}
		else if (expression[i] == '/' && number.size() >= 2)
		{
			res = number.top();
			number.pop();
			res = number.top() / res;
			number.pop();
			number.push(res);
		}
		else
		{
			std::cout << "Invalid expresssion!!!" << std::endl;
			return ;
		}
		i++;
	}
	if (number.size() == 1)
	{
		std::cout << number.top() << std::endl;
	}
	else
	{
		std::cout << "Invalid expresssion!!!" << std::endl;
	}
}
