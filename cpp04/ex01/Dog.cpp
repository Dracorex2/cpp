/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/23 16:14:28 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type =  "Dog";
	this->brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	*this = cpy;
	std::cout << "copy of Dog created" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	this->type = other.type;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return (*this);
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog deleted" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "ouaf, ouaf" << std::endl;
}