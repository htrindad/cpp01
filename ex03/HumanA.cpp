/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:19:09 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 14:51:46 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

//CnD
HumanA::HumanA() {};
HumanA::~HumanA() {};
HumanA::HumanA(std::string name, Weapon weapon)
{
	setName(name);
	setWeapon(weapon);
}

//Methods
void HumanA::setName(std::string name) { _name = name; }
void HumanA::setWeapon(Weapon weapon) { _weapon = weapon; }

const Weapon &HumanA::getWeapon() { return _weapon; }
const std::string &HumanA::getName() { return _name; }
void HumanA::attack()
{
	std::cout << _name << " attacks with their " << getWeapon().getType() << '\n';
}
