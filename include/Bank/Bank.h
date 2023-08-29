//
// Created by PC on 29/08/2023.
//
#include "../User/User.h"
#ifndef BANKING_SYSTEM_BANK_H
#define BANKING_SYSTEM_BANK_H


class Bank {
private:
    void userBankAction(int actionId , User &user);
    void performWithdrawal();
    void performBalanceInquiry(User &user);
    void performExist();

public:
    void executeBankAction(User &user);
};



#endif //BANKING_SYSTEM_BANK_H
