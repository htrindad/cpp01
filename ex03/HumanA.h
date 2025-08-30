/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:12:46 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 14:49:14 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.h"
class HumanA
{
	private:
		Weapon _weapon;
		std::string _name;
	public:
		HumanA();
		~HumanA();
		HumanA(std::string name, Weapon weapon);
		void attack();
		void setWeapon(Weapon weapon);
		const Weapon &getWeapon();
		void setName(std::string name);
		const std::string &getName();
};
#endif
