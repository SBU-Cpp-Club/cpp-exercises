#include<vector>
#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{

  constexpr size_t size = 10;
  int ia[size];
  int *beg = std::begin(ia);
  int *last = std::end(ia);


  while (beg != last)
  {  
    *beg = 0;
    ++beg;
  }

  for (int *b = ia; b!= last; ++b)
    cout<< *b <<endl;

  return 0;
}
