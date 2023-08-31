#include "../Bank.h"
#include <iostream>


using namespace std;

void Bank::executeBankAction(User &user) {
    int actionId {};

    cout << "Actions Available: " << endl;
    cout << "1 - Balance Inquiry" << endl;
    cout << "2 - Withdraw" << endl;
    cout << "3 - Exit" << endl;
    cin >> actionId;

    userBankAction(actionId , user);
}
