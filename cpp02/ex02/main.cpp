/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:15:31 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 15:32:14 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	float x = 0;
	float y = 0;
	std::cin >> x;
	std::cin >> y;

	Fixed a(x);
	Fixed b(y);

	std::cout << "a testing" << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "++a :" << ++a << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "--a :" << --a << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "a-- :" << a-- << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "b testing" << std::endl;
	std::cout << b << std::endl;
	std::cout << "other testing" << std::endl;
	std::cout << "a+2 :" << a + Fixed(2) << std::endl;
	std::cout << "a*b :" << a*b << std::endl;
	std::cout << "a/b :" << a/b << std::endl;
	std::cout << "max/min testing" << std::endl;
	std::cout << "max(a,b) :" << Fixed::max(a, b) << std::endl;
	std::cout << "min(a,b) :" << Fixed::min(a, b) << std::endl;
	std::cout << "max(a,a) :" << Fixed::max(a, a) << std::endl;
	std::cout << "operator testing" << std::endl;
	std::cout << "a, b :" << a << ", " << b << std::endl;
	std::cout << "a>b :" << (a > b) << std::endl;
	std::cout << "a<b :" << (a < b) << std::endl;
	std::cout << "a==b :" << (a == b) << std::endl;
	std::cout << "a!=b :" << (a != b) << std::endl;
	Fixed  c( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "c, b :" << c << ", " << b << std::endl;
	std::cout << "c!=b :" << (c != b) << std::endl;
	std::cout << "c==b :" << (c == b) << std::endl;
	return 0;
}