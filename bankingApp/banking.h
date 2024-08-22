#include <string>
#pragma once

#include <iostream>
using namespace std;

class Account{
    string acc_name;
    int acc_no;
        static int accGeneartor;

    protected: 
    float acc_balance;
    public:
    Account(const string& acc_name, float acc_balance);
    virtual ~Account();
    const string get_name() const;
    int getAccountNo() const;
     float getInterestRate() const;

float getBalance() const;
virtual void withdraw(float amount);
virtual void Deposit(float amount);
virtual void AccumulateInterest();
};