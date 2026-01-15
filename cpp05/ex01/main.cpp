/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:34:21 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/15 16:48:18 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat john("john", 3);
	Form bla("Important", 2, 2);
	john.signForm(bla);
	std::cout << "Incrementing john grade" << std::endl;
	try	{
		john.incrementGrade();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	john.signForm(bla);
}
