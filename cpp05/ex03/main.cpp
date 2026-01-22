/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:34:21 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/21 16:23:26 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void test_Pardon(void) {
	PresidentialPardonForm bla("Pardon");
	Bureaucrat CEO("john", 1);
	Bureaucrat janitor("kevin", 149);
	janitor.signForm(bla);
	CEO.signForm(bla);
	janitor.executeForm(bla);
	CEO.executeForm(bla);
}

static void test_Robotomy(void) {
	RobotomyRequestForm bla("robotomy");
	Bureaucrat superior("john", 30);
	Bureaucrat janitor("kevin", 149);
	janitor.signForm(bla);
	superior.signForm(bla);
	janitor.executeForm(bla);
	superior.executeForm(bla);
}

static void test_Shrubbery(void) {
	ShrubberyCreationForm bla("Trees");
	Bureaucrat employe("john", 100);
	Bureaucrat janitor("kevin", 149);
	janitor.signForm(bla);
	employe.signForm(bla);
	janitor.executeForm(bla);
	employe.executeForm(bla);
}

int main(void) {
	test_Shrubbery();
	test_Robotomy();
	test_Pardon();
	return 1;
}
