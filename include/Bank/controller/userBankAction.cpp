#include "../Bank.h"
#include <iostream>

using namespace std;

void Bank::userBankAction(int actionId, User &user) {
    switch (actionId) {
        case 1:
            cout << "Balance Inquiry" << endl;
            performBalanceInquiry(user);
            break;

        case 2:
            cout << "Withdraw" << endl;
            performWithdrawal(user);
            break;

        default:
            cout << "Exit" << endl;
            performExit();
    }

}