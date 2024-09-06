#include <assert.h>
#include<iostream>
using namespace std;
typedef int& IntLRef;
typedef IntLRef& IntLLRef;
typedef IntLRef&& IntLRRef;

typedef int&& IntRRef;
typedef IntRRef& IntRLRef;
typedef IntRRef&& IntRRRef;

template<typename T, typename U>
struct IsSameType
{
  static const bool value = false;
};

template<typename T>
struct IsSameType <T, T>
{
  static const bool value = true;
};

  //////////////////////////////////////////////////////////////////////////////
  //
  // Assignment: Compare as many of these types as possible.  IsSameType is 
  // for comparing types at compile time (don't think too hard about it).
  // Note it is intentional that some comparisons will FAIL.
  //
  //////////////////////////////////////////////////////////////////////////////
  // static_assert(IsSameType<IntLRef, IntLLRef>::value, "LRef DIF LLRef");

int main(){
    static_assert(IsSameType<IntLRef, IntLLRef>::value, "LRef DIF LLRef");
    bool v = IsSameType<IntLRef,IntRLRef>::value;
    cout << "val: " << v << endl;
  return 0;
}
