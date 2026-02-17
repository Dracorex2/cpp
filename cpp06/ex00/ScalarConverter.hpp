/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:44:09 by lucmansa          #+#    #+#             */
/*   Updated: 2026/02/16 17:10:31 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#define TYPE_CHAR 1
#define TYPE_INT 2
#define TYPE_FLOAT 3
#define TYPE_DOUBLE 4
#define TYPE_NAN 5
#define TYPE_PINF 6
#define TYPE_NINF 7


class ScalarConverter
{
private:
	ScalarConverter();
public:
	ScalarConverter(const ScalarConverter &cpy);
	ScalarConverter &operator=(const ScalarConverter &other);
	virtual ~ScalarConverter() = 0;

	static void convert(std::string);
};

int getType(std::string str);
void convertType(std::string str, int type);