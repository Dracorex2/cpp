/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:34:21 by lucmansa          #+#    #+#             */
/*   Updated: 2026/02/03 15:05:02 by lucmansa         ###   ########.fr       */
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
		std::cout << e.what() << '\n';
	}
	john.signForm(bla);
}
