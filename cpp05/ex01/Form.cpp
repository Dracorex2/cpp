/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:56:40 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/15 16:42:56 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("mike"), is_sign(0), grade_sign(1), grade_execute(1){
}

Form::Form(std::string name, int grade_sign, int grade_execute): name(name),
	is_sign(0), grade_sign(grade_sign), grade_execute(grade_execute){
	if(grade_sign < 1)
		throw to_hight;
	else if(grade_sign > 150)
		throw to_low;
	if(grade_execute < 1)
		throw to_hight;
	else if(grade_execute > 150)
		throw to_low;
}

Form::Form(const Form &cpy): name(cpy.name), grade_sign(cpy.grade_sign),
	grade_execute(cpy.grade_execute){
	*this = cpy;
}

Form &Form::operator=(const Form &other) {
	this->is_sign = other.is_sign;
	return *this;
}

Form::~Form() {
}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade to hight";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade to low";
}

const std::string Form::getName() const{
	return this->name;
}
 
bool Form::isSign() const{
	return this->is_sign;
}

int Form::getGradeToSign() const{
	return this->grade_sign;
}

int Form::getGradeToExecute() const{
	return this->grade_execute;
}

std::ostream& operator<<(std::ostream &out, const Form &c) {
	std::string sign;
	if (c.isSign())
		sign = "This form is sign";
	else
		sign = "This form is not sign";
	return out << "Form: " << c.getName() << "need grade " << c.getGradeToSign()
  	<< " to be sign and grade " << c.getGradeToExecute() << " to be execute. " << sign;
}

void Form::beSigned(const Bureaucrat &br) {
	if (br.getGrade() > this->getGradeToSign())
		throw to_low;
	this->is_sign = 1;
}