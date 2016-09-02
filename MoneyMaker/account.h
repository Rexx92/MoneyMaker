#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
public:
    Account();
    Account(double bankBalance);
    void DepositMoney(double amount);
    void WithdrawMoney(double amount);
    double GetBankBalance();
private:
    double _bankBalance;
};

#endif // ACCOUNT_H
