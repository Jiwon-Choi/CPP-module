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
    return (0);
}

int Account::getNbWithdrawals(void) {
    return (0);
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
    _totalAmount += initial_deposit;
    ++_nbAccounts;
}

Account::~Account(void) {

}
void Account::makeDeposit(int deposit) {

}

bool Account::makeWithdrawal(int withdrawal) {
    (void)withdrawal;
    return (false);
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