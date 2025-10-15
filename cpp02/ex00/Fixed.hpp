/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:27:48 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/15 15:41:14 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

class Fixed
{
	private:
		
	public:
		Fixed();
		Fixed(Fixed &cpy);
		Fixed &operator=(const Fixed &other);
		~Fixed();
};