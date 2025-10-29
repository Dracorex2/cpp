/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:54:12 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/29 16:08:51 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	this->energy_point = 50;
	this->health_point = 100;
	this->attack_point = 20;
	std::cout << "Default constructor: ";
	std::cout << "ScavTrap named: mike has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->energy_point = 50;
	this->health_point = 100;
	this->attack_point = 20;
	std::cout << "Constructor by name: ";
	std::cout << "ScavTrap named: " << this->name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap(cpy) {
	std::cout << "Copy constructor: ";
	std::cout << "ScavTrap named: " << this->name << " has been copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->health_point = other.health_point;
	this->energy_point = other.energy_point;
	this->attack_point = other.attack_point;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor: ";
	std::cout << "ScavTrap named: " << this->name << " has been deleted" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->health_point < 1)
		std::cout << "ScavTrap " << this->name << " can't attack, he's DEAD" << std::endl;
	else if (this->energy_point < 1)
		std::cout << "ScavTrap " << this->name << " can't attack, he's too tired" << std::endl;
	else {
		std::cout << "ScavTrap " << this->name << " attack " << target;
		if (this->attack_point < 1)
			std::cout << " and just blew on it" << std::endl;
		else
			std::cout << " and deal " << this->attack_point << " damage" << std::endl;
		this->energy_point--;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " enter in Gate keeper mode" << std::endl;
}
