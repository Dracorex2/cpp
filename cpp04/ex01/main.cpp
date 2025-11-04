/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:50:17 by lucmansa          #+#    #+#             */
/*   Updated: 2025/11/04 15:14:53 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	int count = 100;
	std::cout << "animal test :" << std::endl;
	const Animal* meta[count];
	for (int i = 0; i < (count / 2); i++)
	{
		std::cout << i << std::endl;
		meta[i] = new Dog();
	}
	for (int i = (count / 2); i < count; i++)
	{
		std::cout << i << std::endl;
		meta[i] = new Cat();
	}
	for (int i = 0; i < count; i++)
	{
		delete meta[i];
	}
	Animal* gato = new Cat();
	Animal* gato2 = new Cat();
	*gato2 = *gato;
	delete gato;
	delete gato2;
} 