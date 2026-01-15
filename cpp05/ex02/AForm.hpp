/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:52:06 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/15 17:02:46 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool is_sign;
		const int grade_sign;
		const int grade_execute;
	public:
		AForm();
		AForm(std::string name, int grade_sign, int grade_execute);
		AForm(const AForm &cpy);
		AForm &operator=(const AForm &other);
		virtual ~AForm() = 0;
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

std::ostream& operator<<(std::ostream &out, AForm const &c);

#endif