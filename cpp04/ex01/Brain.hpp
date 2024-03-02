/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:21:38 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/03 17:24:15 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	Brain& operator=(const Brain &copy);
	~Brain();
    
    std::string getIdeas(int i) { return this->ideas[i]; }
    void    setIdeas(int i, std::string str) { this->ideas[i] = str; }
};

#endif
