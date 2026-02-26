/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:25:24 by lucmansa          #+#    #+#             */
/*   Updated: 2026/02/11 15:27:14 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char** argv) {
	if (argc != 2) {
		std::cout << "Need 1 argument" << std::endl;
		return 1;
	}
	ScalarConverter::convert(std::string(argv[1]));
	std::string oui;
	return 0;
}
