/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:42:10 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 17:08:46 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("mike"), energy_point(10), health_point(10), attack_point(0) {
	std::cout << "CrapTrap named: mike as been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): energy_point(10), health_point(10), attack_point(0) {
	this->name = name;
	std::cout << "ClapTrap named: " << this->name << " as been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
	*this = cpy;
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
	std::cout << "ClapTrap named: " << this->name << " as been deleted" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->health_point < 1)
		std::cout << "ClapTrap" << this->name << " can't attack, is DEAD" << std::endl;
	else if (this->energy_point < 1)
		std::cout << "ClapTrap" << this->name << " can't attack, is too tierd" << std::endl;
	else {
		std::cout << "ClapTrap" << this->name << " attack " << target  << "!!!" << std::endl;
		if (this->attack_point < 1)
			std::cout << "ClapTrap " << this->name << " this is not effective" << std::endl;
		else
			std::cout << "ClapTrap" << this->name << " deal " << this->attack_point << " damage" << std::endl;
		this->energy_point--;
	}
}
void ClapTrap::takeDamage(unsigned int amount) {
	if (this->health_point < 1)
		std::cout << "It is already dead, your attack is useless";
	else {
		std::cout << this->name << " take " << amount << " damages" << std::endl;
		this->health_point -= amount;
		if (this->health_point < 1)
			std::cout << this->name << " died";
 	}
}
void ClapTrap::beRepaired(unsigned int amount) {
	if (this->health_point < 1)
		std::cout << this->name << " is already dead, can't be repaired" << std::endl;
	else if (this->energy_point < 1)
		std::cout << this->name << " has no energy, can't be repaired" << std::endl;
	else {
		this->energy_point--;
		this->health_point += amount;
		std::cout << this->name << " has been repaired by " << amount << " , this healt point is " << this->health_point << std::endl;
	}
}