#include<string>
#include<iostream>
#include "banking.cpp"
#include "banking.h"
#include "Checking.h"
#include "Checking.cpp"
#include "Transact.cpp"
#include "savings.cpp"
#include "savings.h"
using namespace std;

int main(){
    // Savings acc("dev",10000, 0.05f);
    // cout << "Initial balance: " << acc.getBalance() << endl;
    // // acc.Deposit(500);
    // acc.withdraw(9980);
    // cout << "New balance: " << acc.getBalance() << endl;
    // Savings acc("devs", 10000, 0.05f);
    Savings *acc = new Savings("devs", 10000, 0.05f);
    
    transact_fun(acc);
    delete acc;
};