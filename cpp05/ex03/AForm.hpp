/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:52:06 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/21 16:28:33 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
	private:
		AForm();
		const std::string name;
		bool is_sign;
		const int grade_sign;
		const int grade_execute;
	protected:
		virtual void doThings(std::string target) const = 0;
	public:
		AForm(std::string name, int grade_sign, int grade_execute);
		AForm(const AForm &cpy);
		AForm &operator=(const AForm &other);
		virtual ~AForm() = 0;
		const std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool isSign() const;
		void beSigned(const Bureaucrat &br);
		void execute(const Bureaucrat &br) const;
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		}to_hight;
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		}to_low;
		class NotSignedException : public std::exception
		{
			virtual const char* what() const throw();
		}not_signed;
};

std::ostream& operator<<(std::ostream &out, AForm const &c);

#endif