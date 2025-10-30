/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:39:40 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/30 18:03:58 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void) {
	std::cout << "ClapTrap class" << std::endl;
	ClapTrap john("john");
	john.attack("bob");
	john.takeDamage(2);
	john.beRepaired(1);
	std::cout << "ScavTrap class" << std::endl;
	ScavTrap jimy("jimy");
	jimy.attack("kevin");
	jimy.takeDamage(2);
	jimy.beRepaired(1);
	jimy.guardGate();
	std::cout << "FragTrap class" << std::endl;
	FragTrap kevin("kevin");
	kevin.attack("kevin");
	kevin.takeDamage(2);
	kevin.beRepaired(1);
	kevin.highFivesGuys();
}