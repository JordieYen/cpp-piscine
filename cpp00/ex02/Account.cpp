/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:08:03 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/23 16:41:52 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <chrono>
# include <ctime> 
# include <string.h>
# include <iomanip>      
using namespace std;
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	this->_amount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "created";
	cout << "\n";
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "closed";
	cout << "\n";
}

int	Account::getNbAccounts( void ){
	return(_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return(_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	cout << "accounts:" << _nbAccounts << ";";
	cout << "total:" << _totalAmount << ";";
	cout << "deposits:" << _totalNbDeposits << ";";
	cout << "withdrawals:" << _totalNbWithdrawals;
	cout << "\n";
}

void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << this->_amount << ";";
	cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits++;

	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	cout << "amount:" << this->_amount << ";";
	cout << "nb_deposits:" << this->_nbDeposits;
	cout << "\n";
}

bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << this->_amount << ";";
	if (this->_amount > withdrawal)
	{
		cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;

		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		cout << "amount:" << this->_amount << ";";
		cout << "nb_withdrawals:" << this->_nbWithdrawals;
		cout << "\n";
		return (true);
	}
	else
	{
		cout << "withdrawal:refused";
		cout << "\n";
		return (false);
	}
}

int		Account::checkAmount( void ) const{
	return(_amount);
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "deposits:" << this->_nbDeposits << ";";
	cout << "withdrawals:" << this->_nbWithdrawals;
	cout << "\n";
}

void	Account::_displayTimestamp( void ){
	using std::chrono::system_clock;
	std::time_t tt = system_clock::to_time_t (system_clock::now());

	struct std::tm * ptm = std::localtime(&tt);
	std::cout << std::put_time(ptm,"[%C%y%m%d_%H%M%S] ");
}
