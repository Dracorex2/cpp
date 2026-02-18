/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:44:09 by lucmansa          #+#    #+#             */
/*   Updated: 2026/02/16 17:10:31 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ratio>
#include "Serializer.hpp"


int main(void) {
	Data test;
	test.i = 1;
	std::cout << &test << " " << test.i << std::endl;
	uintptr_t ptr = Serializer::serialize(&test);
	std::cout << std::hex << ptr << std::dec << std::endl;
	Data *test2 = Serializer::deserialize(ptr);
	test.i = 4;
	std::cout << &test << " " << test.i << std::endl;
	std::cout << test2 << " " << test2->i << std::endl;
}
