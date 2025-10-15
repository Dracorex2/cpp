/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:57:28 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/15 16:17:50 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "adress of str: " << &str << std::endl;
	std::cout << "adress of strPTR: " << stringPTR << std::endl;
	std::cout << "adress of strREF: " << &stringREF << std::endl;
	std::cout << "value of str: " << str << std::endl;
	std::cout << "value of strPTR: " << *stringPTR << std::endl;
	std::cout << "value of strREF: " << stringREF << std::endl;
}