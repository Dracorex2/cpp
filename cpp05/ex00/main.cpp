/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:34:21 by lucmansa          #+#    #+#             */
/*   Updated: 2025/11/12 16:50:03 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat john("john", 3);
	std::cout << john << std::endl;
	john.incrementGrade();
	Bureaucrat john2(john);
	std::cout << john << std::endl;
	john.incrementGrade();
	std::cout << john << std::endl;
	john.incrementGrade();
	std::cout << john << std::endl;
	std::cout << john2 << std::endl;
	Bureaucrat mike;
	std::cout << mike << std::endl;

}