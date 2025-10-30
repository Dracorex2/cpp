/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:50:34 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/30 18:31:46 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal &cpy) {
	*this = cpy;
	std::cout << "copy of Animal created" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	if (&other == this)
		return (*this);
	this->type = other.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal deleted" << std::endl;
}

void Animal::makeSound(void) const {
}

std::string Animal::getType(void) const {
	if (!this->type.empty())
		return (this->type);
	return (NULL);
}