/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:20:49 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 13:40:12 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i<N; i++)
		horde[i].setName(name);
	return horde;
}
