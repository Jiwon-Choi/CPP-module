#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
    return (_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (_totalAmount);
}

int Account::getNbDeposits(void) {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
    ++_nbAccounts;
    _totalAmount += initial_deposit;
}

Account::~Account(void) {
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}
void Account::makeDeposit(int deposit) {
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";deposit:" << deposit
              << ";amount:" << _amount + deposit
              << ";nb_deposits:" << ++_nbDeposits
              << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    ++_totalNbDeposits;
}

bool Account::makeWithdrawal(int withdrawal) {
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";withdrawal:";
    if (_amount - withdrawal < 0) {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal
              << ";amount:" << _amount - withdrawal
              << ";nb_withdrawals:" << ++_nbWithdrawals
              << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    ++_totalNbWithdrawals;
    return (true);
}

int Account::checkAmount(void) const {
    return (0);
}

void Account::displayStatus(void) const {
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

// private 생성자
// static 멤버 변수 초기화