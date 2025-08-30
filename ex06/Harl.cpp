/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:54:30 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 18:27:11 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void Harl::debug() { std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"; }
void Harl::info() { std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"; }
void Harl::warning() { std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n"; }
void Harl::error() { std::cout << "This is unacceptable! I want to speak to the manager now.\n"; }

void Harl::complain(std::string level)
{
	int i = -1;
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	while (++i < 4)
		if (level == levels[i])
			break ;
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			debug();
			std::cout << "[ INFO ]\n";
			info();
			std::cout << "[ WARNING ]\n";
			warning();
			std::cout << "[ ERROR ]\n";
			error();
			break ;
		case 1:
			std::cout << "[ INFO ]\n";
			info();
			std::cout << "[ WARNING ]\n";
			warning();
			std::cout << "[ ERROR ]\n";
			error();
			break ;
		case 2:
			std::cout << "[ WARNING ]\n";
			warning();
			std::cout << "[ ERROR ]\n";
			error();
			break ;
		case 3:
			std::cout << "[ ERROR ]\n";
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
	}
}
