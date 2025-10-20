/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:55:19 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 17:56:22 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string name;
	int energy_point;
	int health_point;
	int attack_point;
	
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &cpy);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};


#endif