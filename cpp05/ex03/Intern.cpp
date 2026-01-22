/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:36:27 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/21 17:40:16 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}


Intern::Intern(const Intern &cpy) {
	*this = cpy;
}

Intern &Intern::operator=(const Intern &other) {
	return (*this);
}

Intern::~Intern() {
}

AForm *Intern::makeForm(std::string type, std::string name) const {
	std::string str[4] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	if (type == "ShrubberyCreationForm")
		AForm *form = new ShrubberyCreationForm(name);
		if (type == "ShrubberyCreationForm")
		AForm *form = new ShrubberyCreationForm(name);
		if (type == "ShrubberyCreationForm")
		AForm *form = new ShrubberyCreationForm(name);
		if (type == "ShrubberyCreationForm")
		AForm *form = new ShrubberyCreationForm(name);
}