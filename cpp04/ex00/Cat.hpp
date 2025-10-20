/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:53:32 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/20 17:54:09 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	Cat(const Cat &cpy);
	Cat &operator=(const Cat &other);
	~Cat();
};

#endif
