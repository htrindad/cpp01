/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:04:33 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 13:40:36 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name);

int main()
{
	size_t max = 20;
	Zombie *horde;

	horde = zombieHorde(max, "Joseph");
	for (size_t i = 0; i < (size_t)max; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
