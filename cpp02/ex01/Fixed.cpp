/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:44:21 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/17 15:10:12 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(const int nb) {
	std::cout << "int constructor called" << std::endl;
	this->raw = nb << this->frac_bits;
}

Fixed::Fixed(const float nb) {
	std::cout << "float constructor called" << std::endl;
	this->raw = roundf(nb * (1 << this->frac_bits));
}

Fixed::Fixed(const Fixed &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw = other.raw;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

float Fixed::toFloat( void ) const {
	return ((float)(this->raw / (float)(1 << this->frac_bits)));
}

int Fixed::toInt( void ) const {
	return (this->raw / (1 << this->frac_bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &c)
{
  return out << c.toFloat();
}