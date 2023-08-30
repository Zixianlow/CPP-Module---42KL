/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:46:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 20:18:51 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &copy){
	if (this != &copy){
		this->rate = copy.rate;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange(){
}

void	BitcoinExchange::getRate(){
	std::ifstream infile("./data.csv");
	if (!infile){
		std::cout << "Error: Data file!!!" << std::endl;
		return ;
	}
	if (infile.is_open()){
		std::string line;
		char	*sdate; char *sprice;
		std::getline(infile, line);
    	while (std::getline(infile, line))
		{
			sdate = std::strtok((char *)line.c_str(), ",");
			sprice = std::strtok(NULL, ",");
			rate.insert(std::pair<std::string, double>(sdate, std::atof(sprice)));
		}
	}
}

int	ft_valid_date(int y, int m, int d){
	int leap = 0;
	if (y < 2009)
		return (0);	
	if (y % 4 == 0)
		leap = 1;
	std::map<int, int>valid;
	valid.insert(std::pair<int, int>(1, 31));
	valid.insert(std::pair<int, int>(2, 28 + leap));
	valid.insert(std::pair<int, int>(3, 31));
	valid.insert(std::pair<int, int>(4, 30));
	valid.insert(std::pair<int, int>(5, 31));
	valid.insert(std::pair<int, int>(6, 30));
	valid.insert(std::pair<int, int>(7, 31));
	valid.insert(std::pair<int, int>(8, 31));
	valid.insert(std::pair<int, int>(9, 30));
	valid.insert(std::pair<int, int>(10, 31));
	valid.insert(std::pair<int, int>(11, 30));
	valid.insert(std::pair<int, int>(12, 31));
	if (m > 12)
		return (0);	
	if (d > valid[m])
		return (0);
	return (1);
}

void	BitcoinExchange::print(char *filename){
	std::ifstream infile(filename);
	if (!infile){
		std::cout << "Error: could not open file." << std::endl;
		return ;
	}
	if (infile.is_open()){
		std::string line;
		std::getline(infile, line);
		char	*sdate; char *sprice;
    	while (std::getline(infile, line))
		{
			try{
				sdate = std::strtok((char *)line.c_str(), " |");
				if (!sdate)
					throw BadInput();
				if (!ft_valid_date(atoi(sdate), atoi(sdate + 5), atoi(sdate + 8)))
					throw BadInput();
				sprice = std::strtok(NULL, " |");
				if (!sprice)
					throw BadInput();
				float f = atof(sprice);
				if (f > 1000)
					throw NumberTooLarge();
				if (f < 0)
					throw NotPositive();
				std::pair<std::string, float> key = std::make_pair(sdate, f);
				std::map<std::string, float>::iterator	it;
				it = rate.find(key.first);
				if (it == rate.end())
					it = rate.lower_bound(key.first);
				std::cout << sdate << " => " << sprice << " = " << it->second * f << std::endl;
			}
			catch(BadInput &e){
				std::cout << "Error: " << e.what() << line << std::endl;
			}
			catch(NotPositive &e){
				std::cout << "Error: " << e.what() << std::endl;
			}
			catch(NumberTooLarge &e){
				std::cout << "Error: too large a number." << std::endl;
			}
		}	
	}
}
