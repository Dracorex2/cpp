/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/11/04 15:20:28 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type =  "Dog";
	this->brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	this->brain = NULL;
	*this = cpy;
	std::cout << "copy of Dog created" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	if (&other == this)
		return (*this);
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = other.brain->ideas[i];
	return (*this);
}

Dog::~Dog() {
	std::cout << "Adress of the brain " << this->brain << std::endl;
	delete this->brain;
	std::cout << "Dog deleted" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "ouaf, ouaf" << std::endl;
}