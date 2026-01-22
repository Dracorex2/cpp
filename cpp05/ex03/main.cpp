/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:34:21 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/22 15:38:28 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

static void test_Pardon(AForm *form) {
	Bureaucrat CEO("john", 1);
	Bureaucrat janitor("kevin", 149);
	janitor.signForm(*form);
	CEO.signForm(*form);
	janitor.executeForm(*form);
	CEO.executeForm(*form);
}

static void test_Robotomy(AForm *form) {
	Bureaucrat superior("john", 30);
	Bureaucrat janitor("kevin", 149);
	janitor.signForm(*form);
	superior.signForm(*form);
	janitor.executeForm(*form);
	superior.executeForm(*form);
}

static void test_Shrubbery(AForm *form) {
	Bureaucrat employe("john", 100);
	Bureaucrat janitor("kevin", 149);
	janitor.signForm(*form);
	employe.signForm(*form);
	janitor.executeForm(*form);
	employe.executeForm(*form);
}

int main(void) {
	Intern intern;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "testing ShrubberyCreationForm\n" << std::endl;
	test_Shrubbery(intern.makeForm("ShrubberyCreationForm", "Trees"));
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "testing RobotomyRequestForm\n" << std::endl;
	test_Robotomy(intern.makeForm("RobotomyRequestForm", "Robotomy"));
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "testing PresidentialPardonForm\n" << std::endl;
	test_Pardon(intern.makeForm("PresidentialPardonForm", "PresidentialPardon"));
	return 1;
}
