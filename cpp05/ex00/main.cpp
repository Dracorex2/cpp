/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:34:21 by lucmansa          #+#    #+#             */
/*   Updated: 2026/02/03 15:05:15 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat john("john", 3);
	std::cout << john << std::endl;
	try {
		john.incrementGrade();
	}
	catch(const std::exception &e) {
		std::cout << e.what() << '\n';
	}
	Bureaucrat john2(john);
	std::cout << john << std::endl;
		try {
		john.incrementGrade();
	}
	catch(const std::exception &e) {
		std::cout << e.what() << '\n';
	}
	std::cout << john << std::endl;
		try {
		john.incrementGrade();
	}
	catch(const std::exception &e) {
		std::cout << e.what() << '\n';
	}
	std::cout << john << std::endl;
	std::cout << john2 << std::endl;
	try {
		Bureaucrat mike("mike", 0);
	}
	catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}
}