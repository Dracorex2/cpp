/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:46 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/21 15:27:58 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type =  "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy) {
	*this = cpy;
	std::cout << "copy of WrongCat created" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat deleted" << std::endl;
}