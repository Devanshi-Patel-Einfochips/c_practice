#include <functional>
#include <assert.h>

class Foo
{
public:
  Foo(int value) : m_value(value) {}
  int question(int i)
  {
    return i;
  }

  int answer()
  {
    return m_value;
  }
private:
  int m_value;
};


int main()
{
  Foo foo(42);
  std::function<int ( int)> f = [&foo]( int x){
    return foo.question(x);
  };
  std::function<int ()> g = [&foo](){
    return foo.answer();
  };

  //////////////////////////////////////////////////////////////////////////////
  //
  // Assignment: using the methods of the provided object `foo`, initialize `f`
  // and `g` such that the program does not assert.
  //
  //////////////////////////////////////////////////////////////////////////////

  assert( (f(10) + g()) == 52);
  return 0;
}
