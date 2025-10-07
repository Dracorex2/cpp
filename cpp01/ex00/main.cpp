/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:09:56 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/06 17:27:24 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	Zombie *zombie = newZombie("salut");
	zombie->announce();
	delete zombie;
	randomChump("Aurevoir");
	return 0;
}