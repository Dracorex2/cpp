/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:27:48 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/17 15:09:00 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int raw;
		static const int frac_bits = 8;
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &cpy);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed operator+(const Fixed nb);
		Fixed operator-(const Fixed nb);
		Fixed operator*(const Fixed nb);
		Fixed operator/(const Fixed nb);
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		bool operator==(const Fixed nb);
		bool operator!=(const Fixed nb);
		bool operator>(const Fixed nb);
		bool operator<(const Fixed nb);
		bool operator>=(const Fixed nb);
		bool operator<=(const Fixed nb);
		static const Fixed &max(const Fixed &nb1, const Fixed &nb2);
		static const Fixed &min(const Fixed &nb1, const Fixed &nb2);
		static const Fixed &max( Fixed &nb1, Fixed &nb2);
		static const Fixed &min( Fixed &nb1, Fixed &nb2);
};
std::ostream& operator<<(std::ostream &out, Fixed const &c);

#endif