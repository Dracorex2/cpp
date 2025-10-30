/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:39:40 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/30 18:04:15 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap john("john");
	ScavTrap jimy(john);
	
	std::cout << "ClapTrap class" << std::endl;
	john.attack("bob");
	john.takeDamage(2);
	john.beRepaired(1);
	std::cout << "ScavTrap class" << std::endl;
	jimy.attack("kevin");
	jimy.takeDamage(2);
	jimy.beRepaired(1);
	jimy.guardGate();
}
