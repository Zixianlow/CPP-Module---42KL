/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:14:06 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/08/30 16:56:19 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	ft_find_n_replace(std::string &line, std::string find, std::string replace)
{
	size_t pos = 0;
	pos = line.find(find, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, find.length());
		line.insert(pos, replace);
		pos = line.find(find, pos);
	}
}

char *ft_outname(char *infile)
{
	return (strcat(infile, ".replace"));
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid parameters count!!!" << std::endl;
		return 1;
	}
	std::string find = av[2];
	std::string replace = av[3];
	std::ifstream infile(av[1]);
	if (!infile)
	{
		std::cout << "Invalid infile!!!" << std::endl;
		return 1;
	}
	char *outname = ft_outname(av[1]);
	std::ofstream outfile(outname);
	if (!outfile)
	{
		std::cout << "Invalid outfile!!!" << std::endl;
		infile.close();
		return 1;
	}
	if (infile.is_open())
	{
		std::string line;
    	while (std::getline(infile, line))
		{
			ft_find_n_replace(line, find, replace);
			outfile << line << std::endl;
		}
	}
	outfile.close();
	infile.close();
	return 0;
}
