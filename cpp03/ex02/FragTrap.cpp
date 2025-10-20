/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:54:12 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 16:01:12 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): name("mike"), energy_point(100), health_point(100), attack_point(30) {
}

FragTrap::FragTrap(std::string name): energy_point(100), health_point(100), attack_point(30) {
	this->name = name;
	std::cout << "FragTrap named: " << this->name << " as been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap(cpy) {
	*this = cpy;
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
	std::cout << "FragTrap named: " << this->name << " as been deleted" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (this->health_point < 1)
		std::cout << "FragTrap " << this->name << "FragTrap can't attack, is DEAD" << std::endl;
	else if (this->energy_point < 1)
		std::cout << "FragTrap " << this->name << "FragTrap can't attack, is too tierd" << std::endl;
	else {
		std::cout << "FragTrap " << this->name << " attack " << target  << "!!!" << std::endl;
		if (this->attack_point < 1)
			std::cout << "	bro just blew on it" << std::endl;
		else
			std::cout << "	is deal " << this->attack_point << " damage" << std::endl;
		this->energy_point--;
	}
}


void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap named " << this->name << "high-fives you!!" << std::endl;
}