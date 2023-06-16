/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:50:02 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/26 18:37:40 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	static int	index;

	_nbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << index << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << "\n";
	_totalNbDeposits += 1;
	_amount += deposit;
	_totalAmount += deposit;
	index++;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	static int	index;

	_displayTimestamp();
	if (_amount < withdrawal)
		std::cout << "index:" << index << ";p_amount:" << _amount << ";withdrawal:refused\n";
	else
	{
		_nbWithdrawals += 1;
		std::cout << "index:" << index << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << "\n";
		_totalNbWithdrawals += 1;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
	}
	index++;
	return (1);
}

int	Account::checkAmount(void) const
{
	//index:0;p_amount:47;withdrawal:refused
	return (0);
}

void	Account::displayStatus(void) const
{
	static int	index;

	_displayTimestamp();
	std::cout << "index:" << index << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
	index++;
	return ;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
	return ;
}

void	Account::_displayTimestamp( void )
{
	std::tm		*now;
	std::time_t	t;
	char		buff[64];

	t = std::time(NULL);
	now = std::localtime(&t);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", now);
	std::cout << "[" << buff << "] ";
}

Account::~Account(void)
{
	static int	index;

	_displayTimestamp();
	std::cout << "index:" << index << ";amount:" << _amount << ";closed\n";
	index++;
	return ;
}

Account::Account(int initialDeposit)
{
	static int	index;

	_displayTimestamp();
	std::cout << "index:" << index << ";amount:" << initialDeposit << ";created\n";
	_amount = initialDeposit;
	_totalAmount += _amount;
	index++;
	_nbAccounts = index;
	return ;
}