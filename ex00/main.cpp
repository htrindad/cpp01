/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:04:33 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 12:25:29 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

typedef unsigned long size_t;

void randomChump(std::string);

int main()
{
	std::stringstream ss;

	for (size_t i = 0; i < 7; i++)
	{
		ss << i;
		randomChump("Zombie " + ss.str());
		ss.str("");
	}
	return 0;
}
