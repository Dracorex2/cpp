/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:09:56 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/15 16:16:55 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	int nb = 100;
	Zombie *zombie = zombieHorde(nb, "jean");
	if (!zombie) {
		return (1);
	}
	for (int i = 0; i < nb; i++)
		zombie[i].announce();
	delete[] zombie;
	return 0;
}