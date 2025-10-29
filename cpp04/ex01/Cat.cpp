/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/23 17:09:45 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type =  "Cat";
	this->brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	*this = cpy;
	std::cout << "copy of Cat created" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return (*this);
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat deleted" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "miaou, miaou" << std::endl;
}