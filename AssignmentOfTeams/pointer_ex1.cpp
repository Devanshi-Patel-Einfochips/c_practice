#include <assert.h>
#include<memory>
#include<iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
//
// Assignment: compile existing program and run using valgrind, and save the
// output.  Next, modify the program so that it uses managed pointers instead of
// raw pointers.  Run the modified program using valgrind, and compare outputs.
// Run the program using a debugger, and step through copying and deleting the
// managed pointers.
//
////////////////////////////////////////////////////////////////////////////////
class Foo
{
public:
    Foo(unique_ptr<int>& v) : val(v) {}
    int answer()
    {
        return *val;
    }
private:
    unique_ptr<int>& val;
};

int main()
{
    // int *i = new int(42);
    std::unique_ptr<int> i = make_unique<int>(42);
    Foo f(i);
    assert(f.answer() == 42);
}
