/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/11/04 15:10:19 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type =  "Cat";
	this->brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	this->brain = NULL;
	*this = cpy;
	std::cout << "copy of Cat created" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	if (&other == this)
		return (*this);
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = other.brain->ideas[i];
	return (*this);
}

Cat::~Cat() {
	std::cout << this->brain->ideas[0] << std::endl;
	delete this->brain;
	std::cout << "Cat deleted" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "miaou, miaou" << std::endl;
}