#include <vector>
#include <inttypes.h>
class Foo
{
public:
  Foo() : bytes(1024, 42)
  {
  }

private:
  std::vector<uint8_t> bytes;
};


int main()
{
  //////////////////////////////////////////////////////////////////////////////
  //
  // Assignment: compile existing program and run using valgrind, and save the
  // output.  Next, modify the program so that it uses move semantics instead of
  // copy semantics.  Run the modified program using valgrind, and compare outputs.
  //
  //////////////////////////////////////////////////////////////////////////////

  Foo f;
  for(unsigned int i = 0; i < 1024 * 1024; ++i)
  {
    Foo g = f;
  }
}
