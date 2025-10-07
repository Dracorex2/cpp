/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:37:52 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/06 16:55:34 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdio>

int main(void) {
	PhoneBook phonebook = PhoneBook();
	std::string line;
	std::string first_name;
	std::string last_name;
	std::string phone_number;
	std::string nickname;
	std::string darkest_secret;

	while (1) {
		std::cout << "you must type ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, line))
			return (1);
		if (line == "ADD") {
			while (first_name.length() < 1) {
				std::cout << "enter first name : ";
				if (!std::getline(std::cin, first_name))
					return (1);
			}
			while (last_name.length() < 1) {
				std::cout << "enter last name : ";
				if (!std::getline(std::cin, last_name))
					return (1);
			}
			while (nickname.length() < 1) {
				std::cout << "enter nickname : ";
				if (!std::getline(std::cin, nickname))
					return (1);
			}
			while (phone_number.length() < 1) {
				std::cout << "enter phone number : ";
				if (!std::getline(std::cin, phone_number))
					return (1);
			}
			while (darkest_secret.length() < 1) {
				std::cout << "enter darkest secret : ";
				if (!std::getline(std::cin, darkest_secret))
					return (1);
			}
			phonebook.Add(Contact(first_name, last_name, phone_number, nickname, darkest_secret));
			first_name.clear();
			last_name.clear();
			phone_number.clear();
			nickname.clear();
			darkest_secret.clear();
		}
		else if (line == "SEARCH") {
			phonebook.Search();
		}
		else if (line == "EXIT") {
			std::cout << "bye" << std::endl;
			break;
		}
		std::cout << std::endl;
	}
	return (0);
}