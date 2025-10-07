/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:39:03 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/06 16:55:04 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include "Contact.hpp"
#include "Box.hpp"
#include "Include.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int len;
	public:
		PhoneBook();
		void Add(Contact contact);
		void Search();
};
#endif
