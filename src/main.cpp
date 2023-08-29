#include <iostream>
#include "../include/User/User.h"
#include "../include/Bank/Bank.h"
#include <string>

int main() {
    User user;
    Bank bank;


    user.inputUserDetails();
    bank.executeBankAction(user);
    return 0;
}
