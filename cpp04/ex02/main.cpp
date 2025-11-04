/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:50:17 by lucmansa          #+#    #+#             */
/*   Updated: 2025/11/04 15:15:07 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "animal test :" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound(); //will output the cat sound!
	i->makeSound();
	delete j;
	delete i;
	Animal* gato = new Cat();
	Animal* gato2 = new Cat();
	*gato2 = *gato;
	delete gato;
	delete gato2;
	//Animal j(); 
}
