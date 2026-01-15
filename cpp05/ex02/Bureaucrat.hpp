/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:56:43 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/15 17:02:58 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();
		void incrementGrade();
		void decrementGrade();
		const std::string getName() const;
		int getGrade() const;
		void signForm(AForm &from);
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		}to_hight;
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		}to_low;
};
std::ostream& operator<<(std::ostream &out, Bureaucrat const &c);

#endif