#include "banking.h"
#include <string>
using namespace std;
int Account :: accGeneartor = 1000;
Account::Account(const string &name, float balance): acc_name(name), acc_balance(balance){
    acc_no = ++accGeneartor;
    cout << "ACCOUNT() " <<endl;
}
Account::~Account(){
    cout << "~ACCOUNT() " <<endl;

}
const string Account::get_name() const
{
    return acc_name;
}

int Account::getAccountNo() const
{
    return acc_no;
}

float Account::getInterestRate() const
{
    return 0.0f;
}

float Account::getBalance() const
{
    return acc_balance;
}

void Account::withdraw(float amount)
{
    if(amount < acc_balance && acc_balance > 0){
        acc_balance -= amount;
    }
    else{
        cout<< "Insufficient balance" << endl;
    }
}

void Account::Deposit(float amount)
{
    acc_balance += amount;
}

void Account::AccumulateInterest()
{
}
