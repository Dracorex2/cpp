/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:48:24 by lucmansa          #+#    #+#             */
/*   Updated: 2026/02/16 17:07:30 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */) {
}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy) {
	*this = cpy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter() {
}

void ScalarConverter::convert(std::string str) {
	int type = getType(str);
	if (type != 0)
		convertType(str, type);
	else
		std::cout << "Error, unknow type" << std::endl;
}
