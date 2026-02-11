/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:56:40 by lucmansa          #+#    #+#             */
/*   Updated: 2026/02/03 16:38:54 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("mike"), is_sign(0), grade_sign(1), grade_execute(1){
}

AForm::AForm(std::string name, int grade_sign, int grade_execute): name(name),
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

AForm::AForm(const AForm &cpy): name(cpy.name), grade_sign(cpy.grade_sign),
	grade_execute(cpy.grade_execute){
	*this = cpy;
}

AForm &AForm::operator=(const AForm &other) {
	this->is_sign = other.is_sign;
	return *this;
}

AForm::~AForm() {
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "grade to hight";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "grade to low";
}

const char* AForm::NotSignedException::what() const throw() {
	return "form not signed";
}

const std::string AForm::getName() const{
	return this->name;
}
 
bool AForm::isSign() const{
	return this->is_sign;
}

int AForm::getGradeToSign() const{
	return this->grade_sign;
}

int AForm::getGradeToExecute() const{
	return this->grade_execute;
}

std::ostream& operator<<(std::ostream &out, const AForm &c) {
	std::string sign;
	if (c.isSign())
		sign = "This form is sign";
	else
		sign = "This form is not sign";
	return out << "AForm: " << c.getName() << "need grade " << c.getGradeToSign()
  	<< " to be sign and grade " << c.getGradeToExecute() << " to be execute. " << sign;
}

void AForm::beSigned(const Bureaucrat &br) {
	if (br.getGrade() > this->getGradeToSign())
		throw to_low;
	this->is_sign = 1;
}

void AForm::execute(const Bureaucrat &br) const{
	if (br.getGrade() > this->getGradeToExecute())
		throw to_low;
	if (!this->isSign())
		throw not_signed;
	this->doThings(br.getName());
}
