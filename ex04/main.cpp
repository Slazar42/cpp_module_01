/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:29:17 by slazar            #+#    #+#             */
/*   Updated: 2023/10/24 17:34:56 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream   in(filename);
	if (!in.is_open() || in.fail()) {
		std::cerr << "\033[1;31mEroor : can't open file : \033[0m" << filename << std::endl;
		return 3;}
	std::ofstream   out(filename + ".replace");
	if (!out.is_open() || out.fail()) {
		std::cerr << "\033[1;31mError: can't create output file: \033[0m" << filename << ".replace" << std::endl;
		return 4;}
	std::string line;
	size_t pos;
	size_t len_s1 = s1.length();
	while (std::getline(in, line))
	{ 
		while (line.find(s1) != -1)
		{
			pos = line.find(s1);
			out << line.substr(0,pos) ;
			out << s2;
			line = line.substr(pos+len_s1);
		}
		out << line ;
		if(!in.eof())
			out << std::endl;
	}
	out.close();
	in.close();
	return (0);
}

int main(int ac,char **av)
{
	if (ac != 4){
		std::cerr << "\033[1;31mWrong number of arguments\033[0m" << std::endl;
		std::cerr << "try : ./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	if (s1.empty()){
		std::cerr << "\033[1;31mError: the string to be replaced is empty\033[0m" << std::endl;
		return (2);
	}
	std::string s2 = av[3];
	if(replace(filename, s1, s2) == 3)
		return (3);
	else if(replace(filename, s1, s2) == 4)
		return (4);
}
 