#include <assert.h>
#include <algorithm>

int fib()
{
  static int fnn = 1;
  static int fn = 0;

  int fnnn = fn + fnn;
  int f = fn;
  fn = fnn;
  fnn = fnnn;
  return f;
}

std::vector<int> v={    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 
    2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 
    317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 
    14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 
    433494437, 701408733, 1134903170, 1836311903
};

//////////////////////////////////////////////////////////////////////////////
//
// Assignment: replace procedural initialization of `v` inside main with an
// initializer list at the declaration.
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
  // changed this
  // v.push_back(0);
  // v.push_back(1);
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // v.push_back(5);
  // v.push_back(8);
  // v.push_back(13);
  // v.push_back(21);
  // v.push_back(34);
  // v.push_back(55);
  // v.push_back(89);
  // v.push_back(144);
  // v.push_back(233);
  // v.push_back(377);
  // v.push_back(610);
  // v.push_back(987);
  // v.push_back(1597);
  // v.push_back(2584);
  // v.push_back(4181);
  // v.push_back(6765);
  // v.push_back(10946);
  // v.push_back(17711);
  // v.push_back(28657);
  // v.push_back(46368);
  // v.push_back(75025);
  // v.push_back(121393);
  // v.push_back(196418);
  // v.push_back(317811);
  // v.push_back(514229);
  // v.push_back(832040);
  // v.push_back(1346269);
  // v.push_back(2178309);
  // v.push_back(3524578);
  // v.push_back(5702887);
  // v.push_back(9227465);
  // v.push_back(14930352);
  // v.push_back(24157817);
  // v.push_back(39088169);
  // v.push_back(63245986);
  // v.push_back(102334155);
  // v.push_back(165580141);
  // v.push_back(267914296);
  // v.push_back(433494437);
  // v.push_back(701408733);
  // v.push_back(1134903170);
  // v.push_back(1836311903);

  std::vector<int> expected(47);
  std::generate(expected.begin(), expected.end(), fib);
  assert(v == expected);
  return 0;
}
