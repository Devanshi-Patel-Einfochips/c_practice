#include <functional>
#include <assert.h>

int question(int i)
{
  return i;
}

int answer()
{
  return 42;
}



int main()
{
  std::function<int (int)> f = question;
  std::function<int ()> g= answer;

  //////////////////////////////////////////////////////////////////////////////
  //
  // Assignment: using the provided functions, initialize `f` and `g` such
  // that the program does not assert.
  //
  //////////////////////////////////////////////////////////////////////////////

  assert( (f(10) + g()) == 52);
  return 0;
}
