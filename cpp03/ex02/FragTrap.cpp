/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:54:12 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/30 18:01:05 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->energy_point = 100;
	this->health_point = 100;
	this->attack_point = 30;
	std::cout << "Default constructor: ";
	std::cout << "FragTrap named: mike has been created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->energy_point = 100;
	this->health_point = 100;
	this->attack_point = 30;
	std::cout << "Constructor by name: ";
	std::cout << "FragTrap named: " << this->name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap(cpy) {
	std::cout << "Copy constructor: ";
	*this = cpy;
	std::cout << "FragTrap named: " << this->name << " has been copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->health_point = other.health_point;
	this->energy_point = other.energy_point;
	this->attack_point = other.attack_point;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "Destructor: ";
	std::cout << "FragTrap named: " << this->name << " has been deleted" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap named " << this->name << " high-fives you!!" << std::endl;
}