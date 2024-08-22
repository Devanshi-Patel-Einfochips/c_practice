#include<iostream>
#include<string>
#pragma once

#include "banking.h"
using namespace std;


class checking: public Account{
    public:
    void withdraw(float amount);
    using Account :: Account;
    // checking(string const &name, float balance);

    ~checking();

};