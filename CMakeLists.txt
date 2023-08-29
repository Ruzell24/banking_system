cmake_minimum_required(VERSION 3.26)
project(banking_system)

set(CMAKE_CXX_STANDARD 17)

add_executable(banking_system src/main.cpp
        include/User/User.cpp
        include/User/User.h
        include/Bank/Bank.h
        include/Bank/controller/userBankAction.cpp
        include/Bank/controller/executeBankAction.cpp
        include/Bank/utilities/performBalanceInquiry.cpp
        include/Bank/utilities/performWithdraw.cpp
        include/Bank/utilities/performExit.cpp
        include/Bank/utilities/performOtherAction.cpp)
