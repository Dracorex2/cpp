/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Box.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:56:55 by lucmansa          #+#    #+#             */
/*   Updated: 2025/09/29 15:18:26 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Box.hpp"

void draw_first_line() {
	std::cout << "┌";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t i = 0; i < 10; i++)
		{
			std::cout << "─";
		}
		std::cout << "┬";
	}
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "─";
	}
	std::cout << "┐" << std::endl;
}

void draw_end_line() {
	std::cout << "└";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t i = 0; i < 10; i++)
		{
			std::cout << "─";
		}
		std::cout << "┴";
	}
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "─";
	}
	std::cout << "┘" << std::endl;
}

void draw_sep_line() {
	std::cout << "├";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t i = 0; i < 10; i++)
		{
			std::cout << "─";
		}
		std::cout << "┼";
	}
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "─";
	}
	std::cout << "┤" << std::endl;
}

void draw_box_line(std::string str1, std::string str2, std::string str3, std::string str4) {
	std::cout << "│";
	if (str1.size() > 10)
		std::cout << str1.substr(0, 9) << '.';
	else
		std::cout << std::setfill (' ') << std::setw(10) << str1;
	std::cout << "│";
	if (str2.size() > 10)
		std::cout << str2.substr(0, 9) << '.';
	else
		std::cout << std::setfill (' ') << std::setw(10) << str2;
	std::cout << "│";
	if (str3.size() > 10)
		std::cout << str3.substr(0, 9) << '.';
	else
		std::cout << std::setfill (' ') << std::setw(10) << str3;
	std::cout << "│";
	if (str4.size() > 10)
		std::cout << str4.substr(0, 9) << '.';
	else
		std::cout << std::setfill (' ') << std::setw(10) << str4;
	std::cout << "│"  << std::endl;
}

