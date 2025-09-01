/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:35:26 by htrindad          #+#    #+#             */
/*   Updated: 2025/09/01 15:56:14 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

//CnD
Weapon *HumanB::_weapon = NULL;
HumanB::HumanB() {};
HumanB::~HumanB() {};
HumanB::HumanB(std::string name) { setName(name); }

//Methods
void HumanB::attack()
{
	if (getWeapon())
		std::cout << _name << " attacks with their " << getWeapon()->getType() << '\n';
}

void HumanB::setName(std::string name) { _name = name; }
void HumanB::setWeapon(Weapon weapon) { *_weapon = weapon; }
const Weapon &HumanB::getWeapon() { return _weapon; }
const std::string HumanB::getName() { return _name; }
