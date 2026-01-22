/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:33:24 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/22 15:25:42 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"


class Intern {
	public:
		AForm *makeForm(std::string type, std::string name) const;
		Intern();
		Intern(const Intern &cpy);
		Intern &operator=(const Intern &other);
		~Intern();
};

#endif