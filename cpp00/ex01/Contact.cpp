/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:24:25 by lucmansa          #+#    #+#             */
/*   Updated: 2025/09/29 16:55:47 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
};

Contact::Contact(std::string first_name, std::string last_name,
		std::string phone_number, std::string nickname, std::string darkest_secret) {
	_first_name = first_name;
	_last_name = last_name;
	_phone_number = phone_number;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
  	std::cout << "contact created" << std::endl;
}