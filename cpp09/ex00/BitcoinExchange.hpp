/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:55:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 19:54:56 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <map>

class BitcoinExchange{
private:
	std::map<std::string, float> rate;
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &copy);
	BitcoinExchange& operator=(const BitcoinExchange &copy);
	~BitcoinExchange();

	void	getRate();
	void	print(char *filename);

	class	NotPositive : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "not a positive number.";
			}
	};

	class	BadInput : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "bad input => ";
			}
	};

	class	NumberTooLarge : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "too large a number.";
			}
	};
};

#endif
