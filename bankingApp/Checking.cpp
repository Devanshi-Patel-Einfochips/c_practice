#include "Checking.h"

void checking::withdraw(float amount)
{
    if((acc_balance - amount) > 50){
        Account:: withdraw(amount);
    }
    else{
        cout << "Invalid amount" << endl;
    }
}


// checking::checking(string const &name, float balance): Account(name, balance)

// }{

checking::~checking()
{
}
