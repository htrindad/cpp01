/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:06:57 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 15:01:56 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
class Weapon
{
	private:
		std::string _type;
	public:
		Weapon();
		~Weapon();
		Weapon(std::string type);
		const std::string &getType() const;
		void setType(std::string);
};
#endif
