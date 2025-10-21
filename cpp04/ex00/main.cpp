/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:50:17 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/21 15:32:34 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "animal test :" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound(); //will output the cat sound!
	i->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	std::cout << "\nwrong animal test :" << std::endl;
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* h = new WrongCat();
	std::cout << h->getType() << " " << std::endl;
	h->makeSound(); //will output the wrong cat sound!
	wrongmeta->makeSound();
	delete h;
	delete wrongmeta;
	return 0;
}