/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:06:05 by lucmansa          #+#    #+#             */
/*   Updated: 2025/09/29 15:46:27 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "Include.hpp"

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _phone_number;
		std::string _nickname;
		std::string _darkest_secret;
	public:
		Contact();
  		Contact(const std::string first_name, const std::string last_name,
			const std::string phone_number, const std::string nickname, const std::string darkest_secret);
	    const std::string first_name() const {
        	return (_first_name);
   		}
	    const std::string last_name() const {
        	return (_last_name);
    	}
	    const std::string phone_number() const {
        	return (_phone_number);
		}
		const std::string nickname() const {
        	return (_nickname);
		}
	    const std::string darkest_secret() const {
        	return (_darkest_secret);
    	}
		
};
#endif