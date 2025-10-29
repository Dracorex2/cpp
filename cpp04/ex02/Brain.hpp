/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:06:01 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/29 16:14:23 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	public:
		Brain(/* args */);
		Brain(const Brain &cpy);
		Brain &operator=(const Brain &other);
		~Brain();
		Brain copy(Brain cpy);
		std::string ideas[100];
};

#endif