#include <assert.h>
#include <vector>

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
    Foo(int * v) : val(v) {}
    int answer()
    {
        return *val;
    }
private:
    int *val;
};

int main()
{
    std::vector<Foo> fs;
    {
        int *i = new int(42);
        for(int j=0; j<100; j++)
            fs.emplace_back(i);
        delete i;
    }

    for(auto f=fs.begin(); f != fs.end(); ++f) {
        assert(f->answer() == 42);
    }
}
