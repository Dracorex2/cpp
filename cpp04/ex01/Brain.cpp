/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:23:02 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/23 17:12:29 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &cpy) {
	*this = cpy;
	std::cout << "copy of Brain created" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {;
	*this->ideas = *other.ideas;
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain deleted" << std::endl;
}

Brain Brain::copy(Brain cpy) {
	
}