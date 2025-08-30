/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:08:27 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/30 16:15:58 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>

static std::string newString(std::string file, std::string finders, std::string keepers)
{
	for (size_t i = file.find(finders); i != std::string::npos; i = file.find(finders))
	{
		file.erase(i, finders.length());
		file.insert(i, keepers);
	}
	return file;
}

int main(int ac, char **av)
{
	std::string s1, s2, content;
	std::ifstream myFile;
	std::stringstream buffer;

	if (ac != 4)
	{
		std::cout << "Input 3 and only 3 arguments\n";
		return 1;
	}
	myFile.open(av[1]);
	if (myFile.fail())
	{
		std::cout << "Error opening file, or it may not exist.\n";
		return -1;
	}
	s1 = av[2];
	s2 = av[3];
	buffer << myFile.rdbuf();
	content = buffer.str();
	myFile.close();
	content = newString(content, s1, s2);
	std::ofstream newFile("out.txt");
	newFile << content;
	newFile.close();
	return 0;
}
