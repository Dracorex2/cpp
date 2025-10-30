/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/30 18:31:34 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type =  "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	*this = cpy;
	std::cout << "copy of Dog created" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	if (&other == this)
		return (*this);
	this->type = other.type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog deleted" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "ouaf, ouaf" << std::endl;
}