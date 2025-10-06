/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:39:03 by lucmansa          #+#    #+#             */
/*   Updated: 2025/09/29 15:30:11 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Box.hpp"
#include "Include.hpp"

class Phonebook
{
	private:
		Contact contact[8];
		int len;
	public:
		Phonebook();
		void Add(Contact contact);
		void Search();
};
#endif
