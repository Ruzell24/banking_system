//
// Created by PC on 29/08/2023.
//
#include "../User/User.h"
#ifndef BANKING_SYSTEM_BANK_H
#define BANKING_SYSTEM_BANK_H


class Bank {
private:
    void userBankAction(int actionId , User &user);
    void performWithdrawal(User &user);
    void performBalanceInquiry(User &user);
    void performExit();
    void performOtherActions(User &user);

public:
    void executeBankAction(User &user);
};



#endif //BANKING_SYSTEM_BANK_H
