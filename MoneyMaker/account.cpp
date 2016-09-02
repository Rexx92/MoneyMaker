#include "account.h"

Account::Account()
{
    this->_bankBalance = 0;
}

Account::Account(double bankBalance)
{
    this->_bankBalance = bankBalance;
}

double Account::GetBankBalance()
{
    return this->_bankBalance;
}

void Account::DepositMoney(double amount)
{
    this->_bankBalance += amount;
}

void Account::WithdrawMoney(double amount)
{
    if(amount > this->_bankBalance) {
        // Todo: Throw Exception
    }
    else {
        this->_bankBalance -= amount;
    }
}
