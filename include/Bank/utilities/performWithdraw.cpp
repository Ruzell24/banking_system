//
// Created by PC on 29/08/2023.
//



#include "../Bank.h"
#include <iostream>


using namespace std;

void Bank::performWithdrawal(User &user) {
    int withdrawAmount;
    int currentBalance = user.getCurrentBalance();

    cout << "How much money you want to withdraw?";
    cin >> withdrawAmount;

    if (withdrawAmount >= currentBalance) {
        cout << "Insufficient Balance" << endl;
        executeBankAction(user);
        return;
    }

    cout << "Successfully withdraw" << endl;
    cout << "Balance left: " << currentBalance - withdrawAmount << endl;
    performOtherActions(user);
}