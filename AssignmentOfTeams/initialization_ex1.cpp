#include <assert.h>

class Foo
{
public:
  int answer()
  {
    return 42;
  }
};

int main()
{
  //////////////////////////////////////////////////////////////////////////////
  //
  // Assignment: fix instantiation of `f` using uniform initialization.
  //
  //////////////////////////////////////////////////////////////////////////////

  Foo f{};
  assert(f.answer() == 42);
  return 0;
}
