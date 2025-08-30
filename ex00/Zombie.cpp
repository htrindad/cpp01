/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:27:49 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 11:57:41 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) { setName(name); }

Zombie::~Zombie() { std::cout << _name << ": has been destroyed\n"; }

void Zombie::announce() { std::cout << _name << ": BraiiiiiiinnnzzzZ\n"; }

void Zombie::setName(std::string name) { _name = name; }

const std::string Zombie::getName() { return _name; }
