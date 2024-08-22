#include "Transact.h"

void transact_fun(Account *paccount)
{
    cout << "Initial Balance" << paccount->getBalance() <<  endl;
    paccount->Deposit(1000);
    paccount->getInterestRate();
    paccount->AccumulateInterest();
    paccount->withdraw(100);
    cout << "Now Balance" << paccount->getBalance() << endl;
    
};
