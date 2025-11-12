/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:56:40 by lucmansa          #+#    #+#             */
/*   Updated: 2025/11/12 16:49:18 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("mike"), grade(1) {
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade) {
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): name(cpy.name) {
	*this = cpy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	this->grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade are already best";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade are already lowest";
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &c)
{
  return out << c.getName() << ", bureaucrat grade " << c.getGrade();
}

void Bureaucrat::incrementGrade() {
	try {
		if (this->grade <= 1)
			throw to_hight;
		this->grade--;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
void Bureaucrat::decrementGrade() {
	try {
		this->grade++;
		if (this->grade >= 150)
			throw to_hight;
		this->grade++;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

const std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}