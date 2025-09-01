/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:19:09 by htrindad          #+#    #+#             */
/*   Updated: 2025/09/01 16:12:20 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

//CnD
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {};
HumanA::~HumanA() {};

//Methods
void HumanA::setName(std::string name) { _name = name; }

const Weapon &HumanA::getWeapon() { return _weapon; }
const std::string &HumanA::getName() { return _name; }
void HumanA::attack()
{
	std::cout << _name << " attacks with their " << getWeapon().getType() << '\n';
}
