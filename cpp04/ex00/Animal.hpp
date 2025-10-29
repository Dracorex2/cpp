/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:50:41 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/29 16:50:07 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &cpy);
	Animal &operator=(const Animal &other);
	virtual ~Animal();
	virtual void makeSound(void) const;
	virtual std::string getType(void) const;
};

#endif