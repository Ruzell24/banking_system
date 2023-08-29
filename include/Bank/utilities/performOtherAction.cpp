//
// Created by PC on 29/08/2023.
//
#include "../Bank.h"
#include <iostream>

using namespace std;

void Bank::performOtherActions(User &user) {
    bool otherUserAction;

    cout << "Do you want to exit - Yes or No?" << endl;
    cout << "1 - Yes" << endl;
    cout << "0 - No" << endl;
    cin >> otherUserAction;

    if (!otherUserAction) {
        executeBankAction(user);
        return;
    }

    performExit();
}