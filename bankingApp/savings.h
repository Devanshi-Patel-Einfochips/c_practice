#include<iostream>
#include<string>
#pragma once
#include "banking.h"
using namespace std;

class Savings: public Account{
    float int_rate;
    public:
    float GetInterestRate();
    void AccumulateInterest();
    Savings(string const &name, float balance, float rate);

    virtual ~Savings();

};