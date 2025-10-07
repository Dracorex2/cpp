/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:57:28 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/06 19:08:16 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "adress of str: " << &str << std::endl;
	std::cout << "adress of strPTR: " << strPTR << std::endl;
	std::cout << "adress of strREF: " << &strREF << std::endl;
	std::cout << "value of str: " << str << std::endl;
	std::cout << "value of strPTR: " << *strPTR << std::endl;
	std::cout << "value of strREF: " << strREF << std::endl;
}