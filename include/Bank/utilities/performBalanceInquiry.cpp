//
// Created by PC on 29/08/2023.
//
#include "../Bank.h"
#include <iostream>

using namespace std;

void Bank::performBalanceInquiry(User &user) {

    cout << "Current Balance of user " << user.getUserDetails().userName << " is " << user.getCurrentBalance() << endl;
    performOtherActions(user);
}