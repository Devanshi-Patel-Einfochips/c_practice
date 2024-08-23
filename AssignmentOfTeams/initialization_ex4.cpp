#include <assert.h>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
  std::vector<std::vector<int>> expected;
  expected.push_back( std::vector<int>(696, 41) );

  {
    const int a[] = {13065,21207,-16651,-1003,-15044,-32188,-26286,12513,-15313,24011,-2209};
    expected.emplace_back(a, a+sizeof(a)/sizeof(int));
  }
  
  expected.push_back( std::vector<int>(3312, 13) );
  expected.push_back( std::vector<int>(2009, 39) );
  expected.push_back( std::vector<int>(1379, 8) );
  expected.push_back( std::vector<int>(3081, 14) );
  {
    const int a[] = {-26503, 29952, -3574, 6348, 22309, -23350, -21044, -31922,
                     -5903, 22287, 6508, -29186, -32266, -10425, 9530, 16745,
                     24791, -11071, -14178, -23259, -9461, 27035, -7176, -4341,
                     7416, -28131, -29825, 32090, 23682, 28258, -15922, -16516,
                     6719, 8613, 17535, 19122, -6307, -16669, -32284, -13323, -978,
                     -14806, -29793, -19733, 23273, -27340, 29614, 14218, -4890,
                     -32336, 13993, -31514, -14819, 21339, 18137, -1979, 18697,
                     117, -5246, 32350, -6764, 1321, 29119, 10629, 32644, 15932};
    expected.emplace_back(a, a+sizeof(a)/sizeof(int));
  }
  expected.push_back( std::vector<int>(3281, 9) );
  expected.push_back( std::vector<int>(2766, 15) );
  {
    const int a[] = {16356,30499,-17528,8239,-14634,21927,-10338,-29306,-26858,-1763,24292,
                     16934,-28458,-21033,14767,-16851,7879,2982,-8216,24583,-30164,-17370};
    expected.emplace_back(a, a+sizeof(a)/sizeof(int));
  }
  expected.push_back( std::vector<int>(2782, 42) );
  expected.push_back( std::vector<int>(2764, 34) );
  expected.push_back( std::vector<int>(1760, 49) );
  {
    const int a[] = {1171,27153,24408,4705,30040,-22760,-202,-3717,-5767,-9620,-10001};
    expected.emplace_back(a, a+sizeof(a)/sizeof(int));
  }
  expected.push_back( std::vector<int>(3740, 4) );



  std::vector<std::vector<int>> actual ={
      std::vector<int>(696, 41),
      {13065, 21207, -16651, -1003, -15044, -32188, -26286, 12513, -15313, 24011, -2209},
      std::vector<int>(3312, 13),
      std::vector<int>(2009, 39),
      std::vector<int>(1379, 8),
      std::vector<int>(3081, 14),
      {-26503, 29952, -3574, 6348, 22309, -23350, -21044, -31922, -5903, 22287, 6508, -29186,
       -32266, -10425, 9530, 16745, 24791, -11071, -14178, -23259, -9461, 27035, -7176, -4341,
       7416, -28131, -29825, 32090, 23682, 28258, -15922, -16516, 6719, 8613, 17535, 19122,
       -6307, -16669, -32284, -13323, -978, -14806, -29793, -19733, 23273, -27340, 29614,
       14218, -4890, -32336, 13993, -31514, -14819, 21339, 18137, -1979, 18697, 117, -5246,
       32350, -6764, 1321, 29119, 10629, 32644, 15932},
      std::vector<int>(3281, 9),
      std::vector<int>(2766, 15),
      {16356, 30499, -17528, 8239, -14634, 21927, -10338, -29306, -26858, -1763, 24292,
       16934, -28458, -21033, 14767, -16851, 7879, 2982, -8216, 24583, -30164, -17370},
      std::vector<int>(2782, 42),
      std::vector<int>(2764, 34),
      std::vector<int>(1760, 49),
      {1171, 27153, 24408, 4705, 30040, -22760, -202, -3717, -5767, -9620, -10001},
      std::vector<int>(3740, 4)
  };




  //////////////////////////////////////////////////////////////////////////////
  //
  // Assignment: initialize `actual` using initializer lists and uniform
  // initialization where possible, and explicit constructors otherwise.
  //
  //////////////////////////////////////////////////////////////////////////////




  assert(expected == actual);
  return 0;
}
