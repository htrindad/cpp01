/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:28:06 by htrindad          #+#    #+#             */
/*   Updated: 2025/09/01 16:32:28 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H
#include "Weapon.h"
class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB();
		~HumanB();
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		const Weapon *getWeapon();
		void attack();
		void setName(std::string name);
		const std::string getName();
};
#endif
