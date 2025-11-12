/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:56:43 by lucmansa          #+#    #+#             */
/*   Updated: 2025/11/12 16:45:09 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
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
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	}to_hight;
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	}to_low;
	
};
std::ostream& operator<<(std::ostream &out, Bureaucrat const &c);

#endif