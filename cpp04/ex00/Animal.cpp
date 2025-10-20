/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:50:34 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 17:48:37 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
}

Animal::Animal(const Animal &cpy) {
	*this = cpy;
}

Animal &Animal::operator=(const Animal &other) {
	this->type = other.type;
	return (*this);
}

Animal::~Animal() {
}

void Animal::makeSound(void) const {
	if (this->type == "Dog") {
		std::cout << "ouaf ouaf" << std::endl;
	}
	else if (this->type == "Cat") {
		std::cout << "miaou" << std::endl;
	}
}

std::string Animal::getType(void) const {
	if (!this->type.empty())
		return (this->type);
	return (NULL);
}