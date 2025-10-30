/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:23:02 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/30 18:31:51 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	this->ideas[0] = "eat";
	this->ideas[1] = "eat2";
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &cpy) {
	*this = cpy;
	std::cout << "copy of Brain created" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {;
	if (&other == this)
		return (*this);
	*this->ideas = *other.ideas;
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain deleted" << std::endl;
}
