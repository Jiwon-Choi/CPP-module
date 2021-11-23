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
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals()
              << std::endl;
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
    _totalAmount += initial_deposit;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}
void Account::makeDeposit(int deposit) {
    _displayTimestamp();
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
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount;
    if (_amount - withdrawal < 0) {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    std::cout << ";withdrawal:" << withdrawal
              << ";amount:" << _amount - withdrawal
              << ";nb_withdrawals:" << ++_nbWithdrawals
              << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    ++_totalNbWithdrawals;
    return (true);
}

int Account::checkAmount(void) const {
    return (_amount);
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp(void) {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[20];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}

Account::Account(void) {
    std::cout << "기본 생성자 자동 생성 방지" << std::endl;
}
// private 생성자
// static 멤버 변수 초기화
