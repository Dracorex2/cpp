/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:04:50 by lucmansa          #+#    #+#             */
/*   Updated: 2025/10/01 17:14:22 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp() {
	std::time_t t = std::time(0);   // Get the time now
	std::tm* now = std::localtime(&t);
	std::cout << '[' << (now->tm_year + 1900) 
	<< std::setfill ('0') << std::setw(2) << (now->tm_mon + 1) 
	<< std::setfill ('0') << std::setw(2) << now->tm_mday 
	<< '_' 
	<< std::setfill ('0') << std::setw(2) << now->tm_hour 
	<< std::setfill ('0') << std::setw(2) << now->tm_min 
	<< std::setfill ('0') << std::setw(2) << now->tm_sec 
	<< ']';
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}
int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	int p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount
			<< ";deposit:" << deposit << ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int p_amount = _amount;
	_displayTimestamp();
	if (p_amount - withdrawal < 0) {
		std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount
			<< ";withdrawal:refused" << std::endl;
		return (0);
	}
	else {
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount
			<< ";withdrawal:" << withdrawal << ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (1);
	}
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << checkAmount()
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this-> _totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}