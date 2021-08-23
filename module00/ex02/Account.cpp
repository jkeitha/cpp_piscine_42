#include "Account.hpp"
#include <time.h>
#include <string>
#include <iostream>

Account::Account( int initial_deposit )
{
	(void)initial_deposit;
}

Account::~Account( void )
{}

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

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "displayAccountsInfos\n";
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "displayStatus\n";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	(void)deposit;
	std::cout << "makeDeposit\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	(void)withdrawal;
	std::cout << "makeWithdrawal\n";
	return true;
}
