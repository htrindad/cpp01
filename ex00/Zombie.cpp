/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:27:49 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/29 19:39:57 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) { setName(name); }

Zombie::~Zombie() { std::cout << _name << ": has been destroyed\n"; }

Zombie::announce() { std::cout << _name << ": BraiiiiiiinnnzzzZ\n"; }

Zombie::setName(std::string name) { _name = name; }

const std::string Zombie::getName() { return _name; }
