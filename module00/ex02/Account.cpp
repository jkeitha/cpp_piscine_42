#include "Account.hpp"
#include <time.h>
#include <iostream>

void	Account::_displayTimestamp( void )
{
	time_t		current_time;
	struct tm	time_struct;
	char		time_output[80];

	current_time = time(NULL);
	time_struct = *localtime(&current_time);
	strftime(time_output, sizeof(time_output), "%Y%m%d_%H%M%S", &time_struct);
	std::cout << "[" << time_output << "]";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex
	<< ";amount:" << _amount << ";created\n";
}

Account::~Account( void )
{
	_displayTimestamp();

	std::cout << " index:" << _accountIndex
	<< ";amount:" << _amount << ";closed\n";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();

	std::cout << " accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();

	std::cout << " index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();

	std::cout << " index:" << _accountIndex
	<< ";p_amount:" << _amount
	<< ";deposit:" << deposit;

	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;

	std::cout << ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();

	std::cout << " index:" << _accountIndex
	<< ";p_amount:" << _amount;

	if (_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused\n";
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << ";withdrawal:" << withdrawal
	<< ";amount:" << _amount
	<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}
