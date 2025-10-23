/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:06:01 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/23 16:09:40 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		/* data */
	public:
		Brain(/* args */);
		Brain(const Brain &cpy);
		Brain &operator=(const Brain &other);
		~Brain();
		std::string ideas[100];
};


#endif