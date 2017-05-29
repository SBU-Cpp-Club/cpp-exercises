#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;


int main()
{
  int int_arr[] = {0, 1, 2, 3, 4, 5};
 
  vector<int> ivec(begin(int_arr), end(int_arr));

  for(auto i : ivec)
     cout << i;
  cout  << endl;

  return 0;
}

