/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:52:06 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/15 16:37:23 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool is_sign;
		const int grade_sign;
		const int grade_execute;
	public:
		Form();
		Form(std::string name, int grade_sign, int grade_execute);
		Form(const Form &cpy);
		Form &operator=(const Form &other);
		~Form();
		const std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool isSign() const;
		void beSigned(const Bureaucrat &br);
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		}to_hight;
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		}to_low;
};

std::ostream& operator<<(std::ostream &out, Form const &c);

#endif