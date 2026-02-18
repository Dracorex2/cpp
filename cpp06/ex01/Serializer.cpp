/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:44:09 by lucmansa          #+#    #+#             */
/*   Updated: 2026/02/16 17:10:31 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr) {
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data *Serializer::deserialize(uintptr_t raw) {
	Data *ret = reinterpret_cast<Data *>(raw);
	return ret;
}
