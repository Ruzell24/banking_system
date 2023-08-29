#include "../Bank.h"
#include <iostream>
using namespace std;

void Bank::userBankAction(int actionId , User &user) {
    switch (actionId) {
        case 1:
            cout << "Balance Inquiry" << endl;
            performBalanceInquiry(user);
            break;

        case 2:
            cout << "Case 2" << endl;
            break;

        case 3:
            cout << "Case 3" << endl;
            break;

        default:
            cout << "Default case" << endl;
    }

}