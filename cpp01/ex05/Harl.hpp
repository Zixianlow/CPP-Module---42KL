/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 19:07:53 by lzi-xian          #+#    #+#             */
/*   Updated: 2023/04/22 19:41:33 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
private:
	void		debug();
	void		info();
	void		warning();
	void		error();
public:
	Harl();
	~Harl();
	void	complain(std::string level);
	typedef void (Harl::*t_func)();
};

#endif
