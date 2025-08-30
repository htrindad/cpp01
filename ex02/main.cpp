/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:49:44 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 14:00:11 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout
		<< "str address: " << &str << '\n'
		<< "stringPTR address: " << stringPTR << '\n'
		<< "stringREF address: " << &stringREF << '\n'
		<< "str: " << str << '\n'
		<< "stringPTR: " << *stringPTR << '\n'
		<< "stringREF: " << stringREF << '\n';
	return 0;
}
