/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:23:03 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 13:26:35 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <sstream>

typedef unsigned long size_t;

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void announce();
		void setName(std::string name);
		const std::string getName();
};

#endif
