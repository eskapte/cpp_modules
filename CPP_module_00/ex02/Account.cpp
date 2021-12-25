#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{

}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits += _totalNbDeposits;
	_totalNbWithdrawals += _totalNbWithdrawals;

	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t currentTime = std::time(0);
	std::tm *lt = std::localtime(&currentTime);

	std::cout << "[" << lt->tm_year + 1900 << lt->tm_mon + 1 << lt->tm_mday;
	std::cout << "_";
	std::cout << lt->tm_hour << lt->tm_min << lt->tm_sec << "]";
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " " << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	bool isRefused = false;

	_displayTimestamp();
	if (withdrawal > _amount)
		isRefused = true;

	if (!isRefused)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
	}

	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (isRefused)
	{
		std::cout << "withdrawal:" << "refused" << std::endl;
		return false;
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}