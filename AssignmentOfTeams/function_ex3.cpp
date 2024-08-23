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

  int answer(const Foo & foo)
  {
    return foo.m_value + m_value;
  }
private:
  int m_value;
};


int main()
{
  Foo foo(12);
  Foo bar(30);
  std::function<int (float, int)> f = [&bar,&foo](float x, int y){
    return bar.answer(foo);
  };
  std::function<int ()> g = [&foo](){
    return foo.question(10);
  };

  //////////////////////////////////////////////////////////////////////////////
  //
  // Assignment: using both the `question` and `answer` methods of the provided
  // objects `foo` and `bar`, initialize `f` and `g` such that the program does
  // not assert.
  //
  //////////////////////////////////////////////////////////////////////////////

  assert( (f(1.0f, 10) + g()) == 52);
  return 0;
}
