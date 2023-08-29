//
// Created by PC on 29/08/2023.
//

#include <iostream>
#include "User.h"
#include <string>

using namespace std;

void User::inputUserDetails() {


    cout << "Please enter you username:";
    cin >> userDetails.userName;
    cout << "Please enter your current balance:";
    cin >> userDetails.bankBalance;


    cout << "Welcome to Fake Bank " << userDetails.userName << " with current bank balance of "
         << userDetails.bankBalance << endl;
}

int User::getCurrentBalance() {

    return userDetails.bankBalance;
}

User::UserDetails User::getUserDetails() {
    return userDetails;
}


