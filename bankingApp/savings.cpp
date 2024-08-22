#include "savings.h"

float Savings::GetInterestRate()
{
    if(int_rate >0 ){
    return int_rate;
    }
    else{
        cout << "Interest is negative number" << endl;
        return 0;
    }
}

void Savings::AccumulateInterest()
{
    if(acc_balance > 0){
    acc_balance += (acc_balance * int_rate);
    }else{
        cout << "No balance in account"<< endl;
    }
}

Savings::Savings(string const &name, float balance, float rate): Account(name, balance), int_rate(rate)
{
        cout << "SAVINGS() " <<endl;

}

Savings::~Savings()
{
            cout << "~SAVINGS() " <<endl;

}
