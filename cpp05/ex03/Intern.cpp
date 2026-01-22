/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:36:27 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/22 15:35:43 by lucmansa         ###   ########.fr       */
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
	(void)other;
	return (*this);
}

Intern::~Intern() {
}

static AForm *shrubbery(std::string name) {
	return new ShrubberyCreationForm(name);
}

static AForm *robotomy(std::string name) {
	return new RobotomyRequestForm(name);
}

static AForm *presidential(std::string name) {
	return new PresidentialPardonForm(name);
}

AForm *Intern::makeForm(std::string type, std::string name) const {
	std::string str[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *(*func[3])(std::string) = {shrubbery, robotomy, presidential};
	
	for (int i = 0; i < 3; i++) {
		if (str[i] == type)
			return func[i](name);
	}
	return NULL;
}