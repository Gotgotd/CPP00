/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:55:29 by gautier           #+#    #+#             */
/*   Updated: 2024/08/14 10:39:50 by gautier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

# define BLUE "\033[36m"
# define RESET "\033[0m"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(){}
Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	_displayTimestamp();
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";" << "created" << std::endl;
}
Account::~Account() {

	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";" << "closed" << std::endl;
}

void	Account::_displayTimestamp(void) {

	char	buffer[20];

	std::time_t currentTime = std::time(0);
	struct tm *localTime = std::localtime(&currentTime); 
	
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", localTime);
	std::cout << buffer << " ";
}

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayStatus() const {

	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "deposits:" << BLUE << Account::_nbDeposits << RESET << ";";
	std::cout << "withdrawals:" << BLUE << Account::_nbWithdrawals << RESET << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	
	_displayTimestamp();
	std::cout << "accounts:" << BLUE << Account::_nbAccounts << RESET << ";";
	std::cout << "total:" << BLUE << Account::_totalAmount << RESET << ";";
	std::cout << "deposits:" << BLUE << Account::_totalNbDeposits << RESET << ";";
	std::cout << "withdrawals:" << BLUE << Account::_totalNbWithdrawals << RESET << std::endl;
}

void	Account::makeDeposit(int deposit) {

	_displayTimestamp();
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "p_amount:" << BLUE << _amount << RESET << ":";
	std::cout << "deposit:" << BLUE << deposit << RESET << ":";
	_amount += deposit;
	std::cout << "amount:" << BLUE << _amount << RESET << ";";
	std::cout << "nb_deposit:" << BLUE << _nbDeposits << RESET << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {

	_displayTimestamp();
	if (withdrawal <= _amount) {
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
	}
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "p_amount:" << BLUE << _amount << RESET << ":";
	if (withdrawal > _amount) {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	else {
		_amount -= withdrawal;
		std::cout << "withdrawal:" << BLUE << withdrawal << RESET << ";";
		std::cout << "amount:" << BLUE << _amount << RESET << ";";
		std::cout << "nb_withdrawal:" << BLUE << _nbWithdrawals << RESET << std::endl;
	}
	return true;
}

int	Account::checkAmount(void) const {
	return this->_amount;
}

