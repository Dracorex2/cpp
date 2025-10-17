/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:27:48 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/17 15:10:35 by lucmansa         ###   ########.fr       */
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
		Fixed(Fixed &cpy);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif