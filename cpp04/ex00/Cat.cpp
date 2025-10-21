/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/21 15:28:53 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type =  "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	*this = cpy;
	std::cout << "copy of Cat created" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat deleted" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "miaou, miaou" << std::endl;
}