//
// Created by PC on 29/08/2023.
//

#ifndef BANKING_SYSTEM_USER_H
#define BANKING_SYSTEM_USER_H

#include <string>

using namespace std;

class User {
private:
    struct UserDetails {
        int bankBalance;
        string userName;
    };
    UserDetails userDetails;

public:
    void inputUserDetails();
    UserDetails getUserDetails();
    int getCurrentBalance();
};


#endif //BANKING_SYSTEM_USER_H
