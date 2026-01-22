/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:51:44 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/21 15:56:00 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

static bool is_init;

RobotomyRequestForm::RobotomyRequestForm(): AForm("mike", 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, 72, 45) {
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): AForm(cpy){
	*this = cpy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	AForm::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::doThings(std::string target) const{
	if (!is_init) {
		srand(time(NULL));
		is_init = 1;
	}
	int nb = rand() % 2;
	if (nb) {
		std::cout << target << " has been robotomized" << std::endl;
	}
	else
		std::cout << "robotomy failed" << std::endl;
}