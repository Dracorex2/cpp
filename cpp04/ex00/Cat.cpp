/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 17:47:10 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type =  "Cat";
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	*this = cpy;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	return (*this);
}

Cat::~Cat() {
}