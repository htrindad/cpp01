/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:00:12 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 12:26:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *newZombie(std::string);

void randomChump(std::string name)
{
	Zombie *zombie;

	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}
