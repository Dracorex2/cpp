/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:39:40 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/21 18:02:02 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	const int i = 2;
	const std::string str = "salut";
	ClapTrap john("john");
	
	john.attack(str);
	john.takeDamage(i);
	john.beRepaired(1);
}
