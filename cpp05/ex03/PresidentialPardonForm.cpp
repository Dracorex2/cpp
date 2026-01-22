/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:51:44 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/21 16:27:17 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("mike", 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(target, 25, 5) {
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): AForm(cpy){
	*this = cpy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	AForm::operator=(other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::doThings(std::string target) const{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}