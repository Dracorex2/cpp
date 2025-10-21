/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:50:34 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/21 15:27:46 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	*this = cpy;
	std::cout << "copy of WrongAnimal created" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimmal created" << std::endl;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "sound of WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	if (!this->type.empty())
		return (this->type);
	return (NULL);
}