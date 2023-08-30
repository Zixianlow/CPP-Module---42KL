/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:46:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 17:25:35 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxSize(0){
}

Span::Span(unsigned int n) : maxSize(n){
}

Span::Span(const Span &copy){
	*this = copy;
}

Span& Span::operator=(const Span &copy){
	if (this != &copy){
		this->numbers = copy.numbers;
		this->maxSize = copy.maxSize;
	}
	return *this;
}

Span::~Span(){
}

void Span::addNumber(int i){
	if (numbers.size() >= maxSize)
		throw ExceedHoldingLimit();
	numbers.push_back(i);
}

int Span::shortestSpan(){
	
	if (numbers.size() < 2)
		throw NotEnoughElements();
	std::sort(numbers.begin(), numbers.end());
	int min = numbers[numbers.size() - 1] - numbers[0];
	for (size_t i = 0; i < numbers.size() - 1; i++){
		if (numbers[i + 1] - numbers[i] < min)
			min = numbers[i + 1] - numbers[i];
	}
	return min;
}

int Span::longestSpan(){
	if (numbers.size() < 2)
		throw NotEnoughElements();
	std::sort(numbers.begin(), numbers.end());
	return numbers[numbers.size() - 1] - numbers[0];
}
