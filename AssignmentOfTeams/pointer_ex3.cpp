#include <assert.h>
#include <vector>
#include <functional>
#include<iostream>
#include<memory>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
// Assignment: compile existing program and run using valgrind.  Fix the
// segmentation fault by replacing all use of pointers with managed pointers.
// Run in valgrind to verify.
//
////////////////////////////////////////////////////////////////////////////////

class Foo
{
public:
    Foo(unique_ptr<int> v) : val(move(v)) {}
    std::function<int ()> get_answer_func()
    {
        return std::bind(&Foo::answer, this);
    }
    int answer()
    {
        return *val;
    }
private:
    unique_ptr<int> val;
};

int main()
{
    // int *i = new int(42);
    unique_ptr<int> i = make_unique<int>(42);
    // Foo* foo = new Foo(i);
    unique_ptr<Foo> foo = make_unique<Foo>(move(i));
    // delete i;
    std::function<int ()> f = foo->get_answer_func();
    // delete foo;
    assert(f() == 42);
}
