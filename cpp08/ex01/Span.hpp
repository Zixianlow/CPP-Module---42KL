/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:55:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/26 18:10:44 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
private:
	unsigned int maxSize;
	std::vector<int> numbers;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &copy);
	Span& operator=(const Span &copy);
	~Span();

	void addNumber(int i);
	int shortestSpan();
	int longestSpan();

	class	ExceedHoldingLimit : public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{
				return "Numbers count is maxed!!!";
			}
	};
	
	class	NotEnoughElements : public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{
				return "Not enough elements to perform action!!!";
			}
	};
};

#endif
