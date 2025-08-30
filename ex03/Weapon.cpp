/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:09:08 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 15:01:57 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

//CnD
Weapon::Weapon() {};

Weapon::~Weapon() {};

Weapon::Weapon(std::string type) { setType(type); }

//Methods
const std::string &Weapon::getType() const { return _type; }

void Weapon::setType(std::string type) { _type = type; }
