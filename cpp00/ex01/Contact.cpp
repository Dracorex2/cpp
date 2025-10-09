/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:24:25 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/08 16:33:39 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
};

Contact::Contact(std::string first_name, std::string last_name,
		std::string phone_number, std::string nickname, std::string darkest_secret) {
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_phone_number = phone_number;
	this->_nickname = nickname;
	this->_darkest_secret = darkest_secret;
  	std::cout << "contact created" << std::endl;
}

const std::string Contact::first_name() const {
	return (this->_first_name);
}

const std::string Contact::last_name() const {
	return (this->_last_name);
}

const std::string Contact::phone_number() const {
	return (this->_phone_number);
}

const std::string Contact::nickname() const {
	return (this->_nickname);
}

const std::string Contact::darkest_secret() const {
	return (this->_darkest_secret);
}
