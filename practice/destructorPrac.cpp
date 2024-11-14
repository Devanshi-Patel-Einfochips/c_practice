#include <iostream>
#include <functional>
#include <unistd.h>

using namespace std;

class Base
{
public:
    Base(){}
    virtual ~Base()
    {
        // Cleanup for Base
        cout << "Destructor of base class" << endl;
    };
};

class Derived : public Base
{
public:
    Derived(){}
    ~Derived()
    {
        cout << "Destructor of derived :" << endl;
        // Cleanup for Derived
    };
};

int main()
{
    Base *obj;
    Derived *der;
    cout << "in main: " << endl;
    while(true){
        sleep(10);
    };
};