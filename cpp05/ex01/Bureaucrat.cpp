/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:56:40 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/15 16:47:22 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("mike"), grade(1) {
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
		if(grade < 1)
			throw to_hight;
		else if(grade > 150)
			throw to_low;
		this->grade = grade;
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
	return "Unable to assign a grade higher than 1";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "unable to assign a grade lower than 150";
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &c) {
  return out << c.getName() << ", bureaucrat grade " << c.getGrade();
}

void Bureaucrat::incrementGrade() {
	if (this->grade == 1)
		throw to_hight;
	this->grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->grade == 150)
		throw to_hight;
	this->grade++;
}

const std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << this->getName();
		std::cout << " couldn't sign ";
		std::cout << form.getName();
		std::cout << " because ";
		std::cout << e.what() << std::endl;

	}	
}