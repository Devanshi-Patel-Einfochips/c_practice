#include <iostream>

class Foo
{
public:
  Foo() : my_count(count++)
  {
    std::cout << "Default Constructor " << my_count << std::endl;
  }

  Foo(const Foo & f)
    : my_count(count++)
  {
    std::cout << "Copy Constructor "  << f.my_count << " to " << my_count << std::endl;
  }

  Foo(Foo && f)
    : my_count(count++)
  {
    std::cout << "Move Constructor "  << f.my_count << " to " << my_count << std::endl;
  } 

  ~Foo()
  {
    std::cout << "Destructor "  << my_count << std::endl;
  }
  
  Foo & operator=(const Foo & f)
  {
    std::cout << "Copy Assignment " << f.my_count << " to " << my_count << std::endl;
            return *this;
  }

  Foo & operator=(Foo && f)
  {
    std::cout << "Move Assignment "  << f.my_count << " to " << my_count << std::endl;
            return *this;
  }

private:
  static int count;
  int my_count;
};

int Foo::count = 0;

int main()
{
  //////////////////////////////////////////////////////////////////////////////
  //
  // Assignment: Write a sequence of constructors and assignments that
  // produces the following output.  Hint: use std::move()
  //
  // Default Constructor 0
  // Destructor 0
  // Default Constructor 1
  // Copy Constructor 1 to 2
  // Default Constructor 3
  // Move Constructor 3 to 4
  // Destructor 3
  // Copy Assignment 1 to 4
  // Move Assignment 4 to 2
  // Destructor 4
  // Destructor 2
  // Destructor 1
  Foo foo;
  Foo foo1;
  Foo foo2(foo1);
  Foo foo3;
  Foo foo4(std::move(foo3));  
  foo4 = foo1;
  foo2 = std::move(foo4);

  //////////////////////////////////////////////////////////////////////////////
}
