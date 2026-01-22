/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:51:44 by lucmansa          #+#    #+#             */
/*   Updated: 2026/01/21 15:46:57 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("mike", 145, 137) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 145, 137) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy): AForm(cpy){
	*this = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	AForm::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

const char* ShrubberyCreationForm::FileException::what() const throw() {
	return "the file cannot be opened";
}

void ShrubberyCreationForm::doThings(std::string target) const{
	std::string name = target + "_shrubbery";
	std::ofstream fs;
	fs.open (name.c_str(), std::fstream::out);
	if (!fs.is_open())
		throw file_exeption;
	fs << "        _-_                 _-_           \n";
	fs << "     /~~   ~~\\           /~~   ~~\\       \n";
	fs << "  /~~         ~~\\     /~~         ~~\\    \n";
	fs << " {               }   {               }    \n";
	fs << "  \\  _-     -_  /     \\  _-     -_  /   \n";
	fs << "    ~  \\\\ //  ~         ~  \\\\ //  ~       \n";
	fs << "        | |                 | |           \n";
	fs << "        | |                 | |           \n";
	fs << "       // \\\\               // \\\\          \n";
	fs.close();
}