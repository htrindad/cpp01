/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:43:12 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 17:17:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_H
#define HALR_H
#include <iostream>
class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain(std::string level);
};
#endif
