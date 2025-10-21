/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:44:21 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/21 17:53:27 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->raw = 0;
}

Fixed::Fixed(const int nb) {
	this->raw = nb << this->frac_bits;
}

Fixed::Fixed(const float nb) {
	this->raw = roundf(nb * (1 << this->frac_bits));
}

Fixed::Fixed(const Fixed &cpy) {
	*this = cpy;
}

Fixed &Fixed::operator=(const Fixed &other) {
	this->raw = other.raw;
	return (*this);
}

Fixed::~Fixed() {
}

int Fixed::getRawBits( void ) const {
	return (this->raw);
}

void Fixed::setRawBits( int const raw ) {
	this->raw = raw;
}

float Fixed::toFloat( void ) const {
	return (this->raw / (float)(1 << this->frac_bits));
}

int Fixed::toInt( void ) const {
	return (this->raw / (1 << this->frac_bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &c)
{
  return out << c.toFloat();
}

Fixed Fixed::operator+(const Fixed nb) const{
	Fixed a;
	a.setRawBits(this->getRawBits() + nb.getRawBits());
	return (a);
}

Fixed Fixed::operator-(const Fixed nb) const{
	Fixed a;
	a.setRawBits(this->getRawBits() - nb.getRawBits());
	return (a);
}

Fixed Fixed::operator*(const Fixed nb) const{
	Fixed a;
	a.setRawBits((this->getRawBits() * nb.getRawBits()) >> this->frac_bits);
	return (a);
}

Fixed &Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed &Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed a;
	a = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (a);
}

Fixed Fixed::operator--(int) {
	Fixed a;
	a = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (a);
}

Fixed Fixed::operator/(const Fixed nb) const{
	Fixed a;
	a.setRawBits((this->getRawBits() << this->frac_bits) / nb.getRawBits());
	return (a);
}

bool Fixed::operator==(const Fixed nb) const{
	return (this->getRawBits() == nb.getRawBits());
}

bool Fixed::operator!=(const Fixed nb) const{
	return (this->getRawBits() != nb.getRawBits());
}

bool Fixed::operator<(const Fixed nb) const{
	return (this->getRawBits() < nb.getRawBits());
}

bool Fixed::operator>(const Fixed nb) const{
	return (this->getRawBits() > nb.getRawBits());
}

bool Fixed::operator<=(const Fixed nb) const{
	return (this->getRawBits() <= nb.getRawBits());
}

bool Fixed::operator>=(const Fixed nb) const{
	return (this->getRawBits() >= nb.getRawBits());
}

const Fixed &Fixed::min(const Fixed &nb1, const Fixed &nb2) {
	if (nb1.getRawBits() < nb2.getRawBits())
		return (nb1);
	return (nb2);
}

const Fixed &Fixed::max(const Fixed &nb1, const Fixed &nb2) {
	if (nb1.getRawBits() > nb2.getRawBits())
		return (nb1);
	return (nb2);
}

Fixed &Fixed::min( Fixed &nb1, Fixed &nb2) {
	if (nb1.getRawBits() < nb2.getRawBits())
		return (nb1);
	return (nb2);
}

Fixed &Fixed::max( Fixed &nb1, Fixed &nb2) {
	if (nb1.getRawBits() > nb2.getRawBits())
		return (nb1);
	return (nb2);
}
