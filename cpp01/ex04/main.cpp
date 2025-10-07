/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:49:56 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/07 16:51:28 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "wrong argument need : [filename] [str to replace] [new str]" << std::endl;
		return 1;
	}
	std::string file = argv[1];
	std::string search = argv[2];
	std::string replace = argv[3];
	std::string str;
	std::ifstream fileIn;
	fileIn.open(file.c_str());
	char c;
	while (1) {
		if (!fileIn.get(c))
			break;
		str += c;
	}
	fileIn.close();
	if (search.length() > 0) {
		while (1) {
			std::size_t pos = str.find(search);
			if (pos == std::string::npos)
				break;
  			std::string tmp = str.substr (0, pos);
			std::string tmp2 = str.substr ((pos + search.length()));
			str = tmp + replace + tmp2;
		}
	}
	std::ofstream fileOut;
	fileOut.open((file + ".replace").c_str());
	fileOut << str;
	fileOut.close();
}
