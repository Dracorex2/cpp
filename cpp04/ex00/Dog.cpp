/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 17:47:01 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type =  "Dog";
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	*this = cpy;
}

Dog &Dog::operator=(const Dog &other) {
	this->type = other.type;
	return (*this);
}

Dog::~Dog() {
}