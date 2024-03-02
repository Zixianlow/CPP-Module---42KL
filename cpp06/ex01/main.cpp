/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:42:09 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/03/02 17:41:24 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

struct Data{
	int	data;
};

int main(void)
{
	Data* data = new Data;
	uintptr_t raw;
	Data* rawdata;
	uintptr_t dataraw;
	
	data->data = 12;
	std::cout << "Data1: " << data << std::endl;
    std::cout << "Data1->data: " << data->data << std::endl;
	raw = Serializer::serialize(data);
	std::cout << "Data2: " << raw << std::endl;
	rawdata = Serializer::deserialize(raw);
	std::cout << "Data3: " << rawdata << std::endl;
	std::cout << "Data3->data: " << rawdata->data << std::endl;
	dataraw = Serializer::serialize(rawdata);
	std::cout << "Data4: " << dataraw << std::endl;
	return (0);
}

