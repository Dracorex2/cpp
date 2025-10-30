/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:42:10 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/30 18:00:48 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("mike"), energy_point(10), health_point(10), attack_point(0) {
	std::cout << "Default constructor: ";
	std::cout << "ClapTrap named: mike has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): energy_point(10), health_point(10), attack_point(0) {
	std::cout << "Constructor by name: ";
	this->name = name;
	std::cout << "ClapTrap named: " << this->name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
	std::cout << "Copy constructor: ";
	*this = cpy;
	std::cout << "ClapTrap named: " << this->name << " has been copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->health_point = other.health_point;
	this->energy_point = other.energy_point;
	this->attack_point = other.attack_point;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor: ";
	std::cout << "ClapTrap named: " << this->name << " has been deleted" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->health_point < 1)
		std::cout << "ClapTrap " << this->name << " can't attack, he's DEAD" << std::endl;
	else if (this->energy_point < 1)
		std::cout << "ClapTrap " << this->name << " can't attack, he's too tired" << std::endl;
	else {
		std::cout << "ClapTrap " << this->name << " attack " << target;
		if (this->attack_point < 1)
			std::cout << " with an uneffective attack" << std::endl;
		else
			std::cout << " and deal " << this->attack_point << " damage" << std::endl;
		this->energy_point--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->health_point < 1)
		std::cout << "ClapTrap " << this->name << " is already dead, your attack is useless";
	else {
		std::cout << "ClapTrap " << this->name << " take " << amount << " damage" << std::endl;
		this->health_point -= amount;
		if (this->health_point < 1)
			std::cout << "ClapTrap " << this->name << " died" << std::endl;
 	}
}
void ClapTrap::beRepaired(unsigned int amount) {
	if (this->health_point < 1)
		std::cout << "ClapTrap " << this->name << " is already dead, can't be repaired" << std::endl;
	else if (this->energy_point < 1)
		std::cout << "ClapTrap " << this->name << " has no energy, can't be repaired" << std::endl;
	else {
		this->energy_point--;
		this->health_point += amount;
		std::cout << "ClapTrap " << this->name << " has been repaired by " << amount << ", his health goes to " << this->health_point << std::endl;
	}
}