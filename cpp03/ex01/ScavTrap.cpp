/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:54:12 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 17:08:59 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): name("mike"), energy_point(10), health_point(10), attack_point(0) {
	std::cout << "ScavTrap named: mike as been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): energy_point(10), health_point(10), attack_point(0) {
	this->name = name;
	std::cout << "ScavTrap named: " << this->name << " as been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap(cpy) {
	*this = cpy;
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
	std::cout << "ScavTrap named: " << this->name << " as been deleted" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->health_point < 1)
		std::cout << "ScavTrap " << this->name << "ScavTrap can't attack, is DEAD" << std::endl;
	else if (this->energy_point < 1)
		std::cout << "ScavTrap " << this->name << "ScavTrap can't attack, is too tierd" << std::endl;
	else {
		std::cout << "ScavTrap " << this->name << " attack " << target  << "!!!" << std::endl;
		if (this->attack_point < 1)
			std::cout << "	bro just blew on it" << std::endl;
		else
			std::cout << "	is deal " << this->attack_point << " damage" << std::endl;
		this->energy_point--;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap named " << this->name << "enter in Gate keeper" << std::endl;
}
