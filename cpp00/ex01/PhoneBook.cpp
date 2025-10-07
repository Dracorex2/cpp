/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:58:15 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/06 16:56:28 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->len = 0;
}

void PhoneBook::Search() {

	if (this->len < 1)
	{
		std::cout << "No contact to show" << std::endl;
		return ;
	}
	int i = 0;
	draw_first_line();
	draw_box_line("Index", "First Name", "Last Name", "Nickname");
	draw_sep_line();
	while (i < this->len)
	{
		draw_box_line(std::string(1, (char)i + '0'), this->contact[i].first_name()
			, this->contact[i].last_name(), this->contact[i].nickname());
		if (i < len - 1)
			draw_sep_line();
		i++;
	}
	draw_end_line();
	std::cout << "enter the number of the contact you want to see : ";
	std::string tmp;
	if (!std::getline(std::cin, tmp))
		return ;
	while (tmp.length() > 1 || tmp[0] - '0' < 0 || tmp[0] - '0' >= len) {
		std::cout << "Please enter a correct number : ";
		if (!std::getline(std::cin, tmp))
		return ;
	}
	i = tmp[0] - '0';
	std::cout << "First name : " << this->contact[i].first_name() << std::endl;
	std::cout << "Last name : " << this->contact[i].last_name() << std::endl;
	std::cout << "Nickname : " << this->contact[i].nickname() << std::endl;
	std::cout << "Phone Number : " << this->contact[i].phone_number() << std::endl;
	std::cout << "Darkest secret : " << this->contact[i].darkest_secret() << std::endl;
}

void PhoneBook::Add(Contact contact) {
	int	i = 0;
	if (len == 8) {
		len--;				
		while (i < len) {
			this->contact[i] = this->contact[i + 1];
			i++;
		}
	}
	this->contact[len] = contact;
	len++;
}
