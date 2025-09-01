/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:35:26 by htrindad          #+#    #+#             */
/*   Updated: 2025/09/01 16:13:13 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

//CnD
HumanB::HumanB() {};
HumanB::~HumanB() {};
HumanB::HumanB(std::string name) { setName(name); }

//Methods
void HumanB::attack()
{
	std::cout << _name << " attacks with their " << getWeapon()->getType() << '\n';
}

void HumanB::setName(std::string name) { _name = name; }
void HumanB::setWeapon(Weapon weapon) { *_weapon = weapon; }
const Weapon *HumanB::getWeapon() { return _weapon; }
const std::string HumanB::getName() { return _name; }
